import numpy as np

def track():
    s = np.linspace(0, 150, 10000)
    s0 = 0

    x = s
    y = np.sin(s * 2 * np.pi / 40) * 5
    trackXY = np.column_stack((x, y))

    return trackXY

import numpy as np

def generateTrackLookup(trackXY, Ts):
    # inputs are:
    # trackXY - track centerline as series of x-y points (by column)
    # Ts - MPC step size (meters)

    # track table returned has colums:
    # s (dist along track centerline) | track x | track y | track curvature (1/radius) | track angle (rad) | track angle diff

    trackX = trackXY[:, 0]
    trackY = trackXY[:, 1]

    t1 = trackXY[:-1, :]    
    t2 = trackXY[1:, :]
    
    # dist between all points in track
    dists = np.sqrt(np.sum((t2-t1)**2, axis=1))

    # sum distance over track and get curvature at each point
    sum_dists = np.zeros([len(dists) + 1, 1]) # sum dist along track
    curve = np.zeros([len(dists) + 1, 1]) # curvature (1/radius) of track
    angles = np.zeros([len(dists) + 1, 1]) # angle of the track
    for i in range(1, len(dists) + 1):
        sum_dists[i] = sum_dists[i-1] + dists[i-1]
        
        x1 = trackX[i-1]
        x2 = trackX[i]
    
        y1 = trackY[i-1]
        y2 = trackY[i]
    
        angles[i-1] = np.arctan2(y2-y1, x2-x1)
        
        if i >= len(dists):
            continue
        x3 = trackX[i+1]
        y3 = trackY[i+1]
    
        a = np.sqrt((x1-x2)**2+(y1-y2)**2) # The three sides
        b = np.sqrt((x2-x3)**2+(y2-y3)**2)
        c = np.sqrt((x3-x1)**2+(y3-y1)**2)
        d = (a+b+c)/2
        A = np.sqrt(d*(d-a)*(d-b)*(d-c)) # Area of triangle
        if abs(np.imag(A)) > 0:
            K = 0
        else:
            K = 4*A/(a*b*c) # Curvature of circumscribing circle
        dangle = np.arctan2(y3-y2, x3-x2)-np.arctan2(y2-y1, x2-x1)
        if dangle == 0:
            sign = 1
        else:
            sign = dangle/np.abs(dangle)
        curve[i] = K * sign
    # just assume the curvature stays constant for start and end point
    curve[0] = curve[1]
    curve[-1] = curve[-2]
    angles[-1] = angles[-2]
    # lookup table for MPC - cut down from full data using Ts
    track_table = np.zeros([int(np.floor(sum_dists[-1]/Ts)), 6])
    
    for i in range(len(track_table)):
        s = i*Ts
        j = np.argmin(np.abs(sum_dists - s))
    
        track_table[i, :] = [sum_dists[j], trackXY[j, 0], trackXY[j, 1], curve[j], angles[j], 0]
    
    print(track_table)

    track_table[:-1, 5] = track_table[1:, 4] - track_table[:-1, 4]
    track_table[-1, 5] = track_table[-2, 5]
    
    return track_table

def dbike_model(X, U, track):
    ## parameters
    m = 220 # mass (kg)
    I = 140 # Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53
    lf = Wheelbase*0.5 # dist from COG to front wheel
    lr = Wheelbase*0.5 # dist from COG to rear wheel
    cb = 21934*2 # force vs slip angle for typers in linear region N/rad
    
    ## track variables
    K = track[4] # track curvature
    
    ## inputs
    delta_dot = U[0] # steering rate
    accel = U[1] # forward force
    
    ## states
    Xo = X[0] # world x
    Yo = X[1] # world y
    ey = X[0]
    etheta = X[1]
    stheta_dot = -K # rate of change in etheta due to track curvature (rad/m)
    otheta_dot = X[2] # rate of change in etheta due tyre forces (rel to global) (rad/s)
    Vx = X[3] # car forward velocity
    Vy = X[4] # car left velocity
    delta = X[5] # steeting angle
    t = X[6] # time

    ## slip and tyre forces
    Zf = (Vy+lf*(otheta_dot))/ Vx # angle of velocity of front wheel relative to front of car
    Bf = delta-Zf # slip angle of front wheel
    Ff = cb*Bf # force of front wheel
    
    Zr = (Vy-lr*(otheta_dot))/ Vx # angle of velocity of front wheel relative to front of car
    Br = -Zr # slip angle of front wheel
    Fr = cb*Br # force of front wheel

    ## velocities
    ey_dot = Vy*np.cos(etheta) + Vx*np.sin(etheta) # velocity perpendicular to the track 
    
    ## accelerations
    Vx_dot = accel# - (Ff*sin(delta))/m # forward acceleration
    Vy_dot = (Ff + Fr)/m # lateral/left acceleration *cos(delta)
    otheta_ddot = (Ff*lf-Fr*lr)/I # angular acceleration *cos(delta)

    ## S stuff
    s_dot = (Vx*np.cos(etheta) - Vy*np.sin(etheta))/(1-ey*K) # ds/dt - differnece in centerline distance with respect to time


    ## next values
    X_dash = np.zeros([7, 1])

    X_dash[0] = ey_dot/s_dot # ey
    X_dash[1] = otheta_dot/s_dot + stheta_dot # theta
    X_dash[2] = otheta_ddot/s_dot # theta_dot
    X_dash[3] = Vx_dot/s_dot # Vx
    X_dash[4] = Vy_dot/s_dot # Vy
    X_dash[5] = delta_dot/s_dot # delta
    X_dash[6] = 1/s_dot # time - dt/ds - difference in time with respect to centerline distance
    
    debug = np.zeros(1, 3)
    debug[0] = Ff
    debug[1] = Fr
    debug[2] = K

    return X_dash, debug

def carODE(X, U, s, track, Ts):
    Ih = U.shape[1]
    Ph = track.shape[0]-1
    
    i = min(np.floor(s/Ts)+1, Ph)
    j = min(i, Ih)
    
    t = s-Ts*(i-1)
    t = t/Ts
    track_row = track[i, :]*(1-t) + track[i+1, :]*t
    
    X_dash, debug = dbike_model(X, U[:, j], track_row)
    debug = np.hstack((debug, U[:, j], track_row[4]))
    return X_dash, debug

def stateChangeBig(X, U, track, Ts):
    Ph = len(track)-1
    ode = lambda s, Z: carODE(Z, U, s, track, Ts)
    
    X_next = np.zeros((len(X), Ph+1))
    X_next[:, 0] = X
    max_ts = 0.01
    min_ts = 0.001
    xxx = np.zeros((Ph*Ts/max_ts+1, 7 + 2 + 1 + 3+1))
    k = 1
    t = 0
    for i in range(1, Ph+1):
        x = X_next[:, i-1]
        xxx[k, 0:7] = x
        while t < i*Ts:
            diff, forces = ode(t, x)
            ts = min(max_ts, 0.005/diff[6])
            ts = max(min_ts, ts)
            ts = min(ts, i*Ts-t)
            if(ts < max_ts and t+ts != i*Ts):
                ts = ts
            xxx[k, 7:14] = forces
            xxx[k, 12] = diff[6]*ts
            k = k+1
            x = x + diff*ts
            if(x[3] < 1):
                x[3] = 1
            t = min(t + ts, i*Ts)
    
            if(t < 0):
                t = t
    
            xxx[k, 0:7] = x
        X_next[:, i] = x
    
        diff, forces = ode(t, x)
        xxx[k, 7:14] = forces
        xxx[k, 12] = diff[6]*ts
        k = k+1
    
    X_next = X_next[:, 1:]
    
    return X_next

def costFcn(U, X0, track, Ts):
    input_horizon = U.shape[1]
    prediction_horizon = track.shape[0] - 1

    #   ey et d v t - dist from centerline, angle rel to cenerline, steering angle, velocity, time
    Q = np.array([[0.1, 0, 0, 0, 0, 0, 0], # ey
                  [0, 0.1, 0, 0, 0, 0, 0], # etheta
                  [0, 0, 0, 0, 0, 0, 0], # dtheta
                  [0, 0, 0, 0, 0, 0, 0], # Vx
                  [0, 0, 0, 0, 0, 0, 0], # Vy
                  [0, 0, 0, 0, 0, 1, 0], # delta
                  [0, 0, 0, 0, 0, 0, 0]]) # time

    Q2 = np.array([[0, 0, 0, 0, 0, 0, 0], # ey
                   [0, 0, 0, 0, 0, 0, 0], # theta
                   [0, 0, 0, 0, 0, 0, 0], # dtheta
                   [0, 0, 0, 0, 0, 0, 0], # Vx
                   [0, 0, 0, 0, 0, 0, 0], # Vy
                   [0, 0, 0, 0, 0, 0, 0], # delta
                   [0, 0, 0, 0, 0, 0, 500 * prediction_horizon]]) # time
    #   dd dv - steering rate (rad/s), acceleration (m/s)
    R = np.array([[0, 0, 0],
                  [0, 0, 0],
                  [0, 0, 1e7]]) # third inputs is constraint softening - cost MUST be large
    
    target_v = 5
    target = np.array([0, 0, 0, target_v, 0, 0, Ts/target_v*prediction_horizon])
    X0[-1] = 0 # reset time (it is abitrary so measuring from zero is easier)

    ## expanding equ
   
#     X = zeros([length(X0) prediction_horizon]);
    J = np.zeros([1, prediction_horizon+1])
    
    X = stateChangeBig(X0, U, track, Ts)
    if(X.shape[1] == 0):
        J = (prediction_horizon+1)*R[-1, -1] * 10
        return J
    for i in range(prediction_horizon):
        j = min(i, input_horizon)
        if(X.shape[1] < i):
            J[i] = R[-1, -1] * 10
            continue
        J[i] = np.transpose(X[:, i] - target)@Q@(X[:, i] - target) + np.transpose(U[:, j])@R@U[:, j]
    J[-1] = np.transpose(X[:, -1] - target)@Q2@(X[:, -1] - target)
    J = sum(J)
    return J

def nonlcons(U, X0, track, prediction_horizon, input_horizon, Ts):
    ceq = [] # no equality constraints
    m = 220 # mass (kg)
    I = 140 # Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53
    lf = Wheelbase*0.5 # dist from COG to front wheel
    lr = Wheelbase*0.5 # dist from COG to rear wheel
    cb = 21934*2 # force vs slip angle for typers in linear region N/rad
    ## constraint softening
    # parameters - ECR = how much violation to allow (matches state units
    ECR_eymax = 1.5 # allow half a meter of violation
    ECR_vmax = 5
    ECR_vmin = 0.09
    ECR_dmax = 0.1
    ECR_sdotmin = 0.09
    ECR_ethetamax = np.pi/3-np.pi/4
    ## expanding equ
    X0[-1] = 0 # reset time (it is abitrary so measuring from zero is easier)
    X = stateChangeBig(X0, U, track, Ts)
    K = track[1:-1, 4]
    Ph = X.shape[1] # is equal to prediction_horizon except when ode errors out
    Ih = min(Ph, input_horizon)
    # epsil is constraint sofening input
    epsil = np.ones([Ph, 1]) * U[3, -1]
    epsil[0:Ih, :] = U[3, 0:Ih].T
    ## constraints
    c = np.ones([prediction_horizon*9, 1])*-1 # 1 per constraint per timestep
    c2 = np.ones([input_horizon*3, 1])*-1 # 1 per constraint per timestep - for input constraints (not necessary atm)
    if(c.shape[0] == 0):
        return c
    c[0:Ph] = X[1, :].T**2 - 2**2 - (ECR_eymax*epsil)**2 # |ey| < 2
    c[Ph+1:Ph*2] = 0.1 - X[4, :].T - ECR_vmin*epsil # v > 0.1
    c[Ph*2+1:Ph*3] = X[4, :].T - 10 - ECR_vmax*epsil # v < 10
    c[Ph*3+1:Ph*4] = X[6, :].T**2 - (0.2)**2 - (ECR_dmax*epsil)**2 # |d| < 0.2
    c[Ph*4+1:Ph*5] = 0.1 - (X[4, :].T*np.cos(X[2, :].T) - X[5, :].T*np.sin(X[2, :].T)) - ECR_sdotmin*epsil # s_dot > 0.1
    # c(Ph*5+1:Ph*6) = X(2, :)'.^2 - (pi/4)^2 - (ECR_ethetamax*epsil).^2; # |etheta| < pi/4
    c[Ph*6+1:Ph*7] = (X[6, :].T - np.arctan2(X[5, :].T + lf*X[3, :].T, X[4, :].T))**2 - 0.18**2 # |front slip angle| < 0.18
    c[Ph*7+1:Ph*8] = np.arctan2(X[5, :].T - lr*X[3, :].T, X[4, :].T)**2 - 0.18**2 # |rear slip angle| < 0.18
    c[Ph*8+1:Ph*9] = X[1, :].T**2 - (0.5/K)**2 - (0.1/K)**2 * epsil # |ey| < |1/k| (with max epsil actualy |ey| < |0.9/K|)

    Ih = input_horizon

    c3 = X[-1, 1:-1] - X[-1, 2:]

    c = [c, c2, c3]

    return c, ceq

def getnp(X0, track, prediction_horizon, input_horizon, Ts):
    
    def np(Z):
        return costFcn(Z, X0, track, Ts)
    
    def np_equ(Z):
        return nonlcons(Z, X0, track, prediction_horizon, input_horizon, Ts)
    
    return np, np_equ


from scipy.optimize import minimize

def runMPC(state, Uinit, track_table, Ts):
    # calculated parameters
    Ih = Uinit.shape[1]
    Ph = track_table.shape[0] - 1

    # parameters
    input_UB = np.array([np.ones(Ih)*np.pi/4/2, np.ones(Ih)*1, np.ones(Ih)]).T # steering rate (rad/s), accel (m/s/s), constraint violations (0 to 1 for no volation to max violation)
    input_LB = np.array([-np.ones(Ih)*np.pi/4/2, -np.ones(Ih)*1, np.zeros(Ih)]).T
    options = {'maxiter': 10000}
    
    # 
    f, fnonlcons = getnp(state, track_table, Ph, Ih, Ts)

    res = minimize(f, Uinit, method='SLSQP', bounds=[(input_LB[i], input_UB[i]) for i in range(Ih)], constraints=[{'type': 'ineq', 'fun': fnonlcons}], options=options)
    
    U = res.x
    cost = res.fun
    X_pred = stateChangeBig(state, U, track_table, Ts)

    return U, X_pred, cost

def track2world(state, track_table_row):
	# converts start coordinates (from state vec) into world coordinates
	# (s, ey) => (x, y)
	
	# inputs:
	# state - state vec [ey, etheta, otheta_dot, vx, vy, phi, t]
		# only ey is used
	# track_table_row - matching row from track table [s, x, y, K, ...]
		# s and angle are used
		# s coord is taken from here not the state vec
	
	angle = track_table_row[5]
	X = track_table_row[2]
	Y = track_table_row[3]
	ey = state[1]
	xy = [X - ey*np.sin(angle), Y + ey*np.cos(angle)]
	return xy
    