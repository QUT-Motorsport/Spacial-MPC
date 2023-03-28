function [trackXY] = track()
    s = linspace(0, 150, 10000)';
    s0 = 0;

    x =  s;
    y = sin(s*2*pi/40).*5;
    trackXY = [x y];
end

function [track_table] = generateTrackLookup(trackXY, Ts)
    % inputs are:
    % trackXY - track centerline as series of x-y points (by column)
    % Ts - MPC step size (meters)

    % track table returned has colums:
    % s (dist along track centerline) | track x | track y | track curvature (1/radius) | track angle (rad) | track angle diff

    trackX = trackXY(:, 1);
    trackY = trackXY(:, 2);
    
    t1 = trackXY(1:end-1, :);
    t2 = trackXY(2:end, :);
    
    % dist between all points in track
    dists = sqrt(sum((t2-t1).^2, 2));
    
    % sum distance over track and get curvature at each point
    sum_dists = zeros([length(dists) + 1, 1]); % sum dist along track
    curve = zeros([length(dists) + 1, 1]); % curvature (1/radius) of track
    angles = zeros([length(dists) + 1, 1]); % % angle of the track
    for i = 2:length(dists) + 1
        sum_dists(i) = sum_dists(i-1) + dists(i-1);
        
    
        x1 = trackX(i-1);
        x2 = trackX(i);
    
        y1 = trackY(i-1);
        y2 = trackY(i);
    
        angles(i-1) = atan2(y2-y1, x2-x1);
        
        if i >= length(dists) + 1
            continue
        end
        x3 = trackX(i+1);
        
        y3 = trackY(i+1);
    
        a = sqrt((x1-x2)^2+(y1-y2)^2); % The three sides
        b = sqrt((x2-x3)^2+(y2-y3)^2);
        c = sqrt((x3-x1)^2+(y3-y1)^2);
        d = (a+b+c)/2;
        A = sqrt(d*(d-a)*(d-b)*(d-c)); % Area of triangle
        if abs(imag(A)) > 0
            K = 0;
        else
            K = 4*A/(a*b*c); % Curvature of circumscribing circle
        end
        dangle = atan2(y3-y2, x3-x2)-atan2(y2-y1, x2-x1);
        if dangle == 0
            sign = 1;
        else
            sign = dangle/abs(dangle);
        end
        curve(i) = K * sign;
    end
    % just assume the curvature stays constant for start and end point
    curve(1) = curve(2);
    curve(end) = curve(end-1);
    angles(end) = angles(end-1);
    
    % lookup table for MPC - cut down from full data using Ts
    track_table = zeros([floor(sum_dists(end)/Ts), 6]); 
    for i = 1:length(track_table)
        s = (i-1)*Ts;
        [m,j] = min(abs(sum_dists - s));
    
        track_table(i, :) = [sum_dists(j), trackXY(j, :), curve(j), angles(j), 0];
    end
    track_table(1:end-1, 6) = track_table(2:end, 5)-track_table(1:end-1, 5);
    track_table(end, 6) = track_table(end-1, 6);
end

function [U, X_pred, cost] = runMPC(state, Uinit, track_table, Ts) 
    %% calculated parameters
    Ih = size(Uinit, 2);
    Ph = size(track_table, 1) - 1;

    %% parameters
    input_UB = [ones(1, Ih)*pi/4/2; ones(1, Ih)*1; ones(1, Ih)]; % steering rate (rad/s), accel (m/s/s), constraint violations (0 to 1 for no volation to max violation)
    input_LB = [-ones(1, Ih)*pi/4/2; -ones(1, Ih)*1; zeros(1, Ih)];
    opt = optimoptions('fmincon','Algorithm','active-set', 'MaxFunctionEvaluations', 1e13, 'MaxIterations', 1e4, 'Display', 'final');%, 'SpecifyObjectiveGradient',true);
    
    %% 
    [f, fnonlcons] = getnp(state, track_table, Ph, Ih, Ts);
    [U, cost] = fmincon(f, Uinit,[],[],[],[],input_LB,input_UB, fnonlcons, opt);
    X_pred = stateChangeBig(state, U, track_table, Ts);
end

function [np, np_equ] = getnp(X0, track, prediction_horizon, input_horizon, Ts)

    np = @(Z) costFcn(Z, X0, track, Ts);

    np_equ = @(Z) nonlcons(Z, X0, track, prediction_horizon, input_horizon, Ts);
end

function J = costFcn(U, X0, track, Ts)
    input_horizon = size(U, 2);
    prediction_horizon = size(track, 1)-1;

    %   ey et d v t - dist from centerline, angle rel to cenerline, steering angle, velocity, time
    Q = [0.1 0 0 0 0 0 0; % ey
         0 0.1 0 0 0 0 0; % etheta
         0 0 0 0 0 0 0; % dtheta
         0 0 0 0 0 0 0; % Vx
         0 0 0 0 0 0 0; % Vy
         0 0 0 0 0 1 0; % delta
         0 0 0 0 0 0 0];% time

    Q2 = [0 0 0 0 0 0 0; % ey
          0 0 0 0 0 0 0; % theta
          0 0 0 0 0 0 0; % dtheta
          0 0 0 0 0 0 0; % Vx
          0 0 0 0 0 0 0; % Vy
          0 0 0 0 0 0 0; % delta
          0 0 0 0 0 0 500*prediction_horizon];% time
    %   dd dv - steering rate (rad/s), acceleration (m/s)
    R = [0 0 0;
         0 0 0
         0 0 1e7]; % third inputs is constraint softening - cost MUST be large
    
    target_v = 5;
    target = [0 0 0 target_v 0 0 Ts/target_v*prediction_horizon]';
    X0(end) = 0; % reset time (it is abitrary so measuring from zero is easier)

    %% expanding equ
   
%     X = zeros([length(X0) prediction_horizon]);
    J = zeros([1, prediction_horizon+1]);
    
    X = stateChangeBig(X0, U, track, Ts);
    if(size(X, 2) == 0)
        J = (prediction_horizon+1)*R(end, end) * 10;
        return
    end
    for i = 1:prediction_horizon
       j = min(i, input_horizon);
        if(size(X, 2) < i)
            J(i) = R(end, end) * 10;
            continue
        end
       J(i) = transpose(X(:, i) - target)*Q*(X(:, i) - target) + transpose(U(:, j))*R*U(:, j);
    end
    J(end) = transpose(X(:, end) - target)*Q2*(X(:, end) - target);
    J = sum(J);

end

function [c, ceq] = nonlcons(U, X0, track, prediction_horizon, input_horizon, Ts)
    
    ceq= []; % no equality constraints   

    m = 220; % mass (kg)
    I = 140; % Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53;
    lf = Wheelbase*0.5; % dist from COG to front wheel
    lr = Wheelbase*0.5; % dist from COG to rear wheel
    cb = 21934*2; % force vs slip angle for typers in linear region N/rad

    %% constraint softening
    
    % parameters - ECR = how much violation to allow (matches state units
    ECR_eymax = 1.5; % allow half a meter of violation
    ECR_vmax = 5;
    ECR_vmin = 0.09;
    ECR_dmax = 0.1;
    ECR_sdotmin = 0.09;
    ECR_ethetamax = pi/3-pi/4;

    %% expanding equ
    X0(end) = 0; % reset time (it is abitrary so measuring from zero is easier)
    X = stateChangeBig(X0, U, track, Ts);
%     K = [track(1:end-1, 4) track(2:end, 4)];
%     [~, i] = max(abs(K), [], 2);
%     i = (0:length(i)-1)*2 + i';
%     K = K(i)';
    K = track(2:end, 4);
    

    Ph = size(X, 2); % is equal to prediction_horizon except when ode errors out
%     if(Ph ~= prediction_horizon)
%         disp("ode error")
%     end
    Ih = min(Ph, input_horizon);

    % epsil is constraint sofening input
    epsil = ones([Ph, 1]) * U(3, end); 
    epsil(1:Ih, :) = U(3, 1:Ih)';

    %% constraints
    % c(x) <= 0
    c = ones([prediction_horizon*9 1])*-1; % 1 per constraint per timestep
    c2 = ones([input_horizon*3 1])*-1; % 1 per constraint per timestep - for input constraints (not necessary atm)
%     c3 = ones([prediction_horizon-1, 1])*-1; % for non-decreasing time
    if(size(c, 1) == 0)
        return
    end
    
    c(1:Ph) = X(1, :)'.^2 - 2^2 - (ECR_eymax*epsil).^2; % |ey| < 2
    c(Ph+1:Ph*2) = 0.1 - X(4, :)' - ECR_vmin*epsil; % v > 0.1
    c(Ph*2+1:Ph*3) = X(4, :)' - 10 - ECR_vmax*epsil; % v < 10
    c(Ph*3+1:Ph*4) = X(6, :)'.^2 - (0.2)^2 - (ECR_dmax*epsil).^2; % |d| < 0.2
    c(Ph*4+1:Ph*5) = 0.1 - (X(4, :)'.*cos(X(2, :)') - X(5, :)'.*sin(X(2, :)')) - ECR_sdotmin*epsil; % s_dot > 0.1
%     c(Ph*5+1:Ph*6) = X(2, :)'.^2 - (pi/4)^2 - (ECR_ethetamax*epsil).^2; % |etheta| < pi/4
    c(Ph*6+1:Ph*7) = (X(6, :)' - atan2(X(5, :)'+lf*X(3, :)', X(4, :)')).^2 - 0.18^2; % |front slip angle| < 0.18
    c(Ph*7+1:Ph*8) = atan2(X(5, :)'-lr*X(3, :)', X(4, :)').^2 - 0.18^2; % |rear slip angle| < 0.18
    c(Ph*8+1:Ph*9) = X(1, :)'.^2 - (0.5./K).^2 - (0.1./K).^2 .* epsil; % |ey| < |1/k| (with max epsil actualy |ey| < |0.9/K|)
    
    Ih = input_horizon;
%     c2(1:Ih) = U(1, :)'.^2 - (pi/4/2)^2;
%     c2(Ih+1:Ih*2) = U(2, :)'.^2 - (1)^2;
%     c2(Ih*2+1:Ih*3) = (U(3, :)' - 0.5).^2 - (0.5)^2;

    % non-decreasing time (earlier time - later time)
    c3 = X(end, 1:end-1)' - X(end, 2:end)'; % time delta > 0 (-time delta < 0)

    c = [c;c2;c3];

end

function X_next = stateChangeBig(X, U, track, Ts)
    Ph = size(track, 1) - 1;

    ode = @(s, Z) carODE(Z, U, s, track, Ts);

%     options = odeset('RelTol', 1e-0, 'AbsTol', 1e-0);%,'OutputFcn', 'odeplot');%, 'Stats','on');
% %     options = odeset('RelTol', 1e-1, 'AbsTol', 1e-1);%, 'Stats','on');
%     [solveS, solveX] = ode23tb(ode, 0:Ts:Ph*Ts, X, options);
%     X_next = solveX(2:end, :)';
    
    X_next = zeros([length(X), Ph+1]);
    X_next(:, 1) = X;
    max_ts = 0.01;
    min_ts = 0.001;
    xxx = zeros([Ph*Ts/max_ts+1, 7 + 2 + 1 + 3+1]);
    k = 1;
    t = 0;
    for i = 1:Ph
        x = X_next(:, i);
        xxx(k, 1:7) = x';
        while t < i*Ts
            [diff, forces] = ode(t, x);
            ts = min(max_ts, 0.005/diff(7));
            ts = max(min_ts, ts);
            ts = min(ts, i*Ts-t);
            if(ts < max_ts && t+ts ~= i*Ts)
                ts = ts;
            end
            xxx(k, 8:14) = forces;
            xxx(k, 13) = diff(7)*ts;
            k = k+1;
            x = x + diff*ts;
            if(x(4) < 1)
                x(4) = 1;
            end
            t = min(t + ts, i*Ts);

            if(t < 0)
                t = t;
            end

%             x(4) = max(x(4), 2);
%             k1 = ode(t, x);
%             k2 = ode(t+ts/2, x+k1*ts/2);
%             k3 = ode(t+ts/2, x+k2*ts/2);
%             k4 = ode(t+ts, x+k3*ts);
%             x = x + (k1+2*k2+2*k3+k4)*ts/6;
%             diff = x2-x;
            xxx(k, 1:7) = x';
%             if(k == 500)
%                 disp('break')
%             end
        end
        X_next(:, i+1) = x;%X_next(:, i) + ode(Ts*(i-1), X_next(:, i))*Ts;

        [~, forces] = ode(t, x);
        xxx(k, 8:14) = forces;
            xxx(k, 13) = diff(7)*ts;  
        k = k+1;


%         figure(2)
%         cla
%         plot(xxx(1:k-1, [13]))% 10 11 12]))
%         plot(xxx(1:k-1, [3, 4, 5, 6, 13]))% 10 11 12]))
% %         legend('odtheta', 'vx', 'vy', 'd', 'tdiff');%, 'K', 'dd', 'dv')
% %         legend('tdiff');%, 'K', 'dd', 'dv')
%         ylim([-1 2])
% 
%         figure(3)
%         cla
%         plot(xxx(1:k-1, [8 9 13]))
%         legend('ff', 'fr', 'tdiff')
% 
%         figure(4)
%         cla
%         plot(xxx(1:k-1, [14]))
%         legend('K')

    
    end
    X_next = X_next(:, 2:end);
% 
%     if ~all((X_next(end, 2:end) - X_next(end, 1:end-1)) > 0)
% 
%         disp("time crime")
%     end

end

function [X_dash, debug] = carODE(X, U, s, track, Ts)
    Ih = size(U, 2);
    Ph = size(track, 1)-1;
    
    i = min(floor(s/Ts)+1, Ph);
    j = min(i, Ih);
    
    t = s-Ts*(i-1);
    t = t/Ts;
    track_row = track(i, :)*(1-t) + track(i+1, :)*t;
    
    [X_dash, debug] = dbike_model(X, U(:, j), track_row);
    debug = [debug U(:, j)' track_row(4)];
end

function [X_dash, debug] = dbike_model(X, U, track)
    %% parameters
    m = 220; % mass (kg)
    I = 140; % Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53;
    lf = Wheelbase*0.5; % dist from COG to front wheel
    lr = Wheelbase*0.5; % dist from COG to rear wheel
    cb = 21934*2; % force vs slip angle for typers in linear region N/rad
    
    %% track variables
    K = track(4); % track curvature
    
    %% inputs
    delta_dot = U(1); % steering rate
    accel = U(2); % forward force
    
    %% states
%     Xo = X(1); % world x
%     Yo = X(2); % world y
    ey = X(1);
    etheta = X(2);
    stheta_dot = -K; % rate of change in etheta due to track curvature (rad/m)
    otheta_dot = X(3); % rate of change in etheta due tyre forces (rel to global) (rad/s)
    Vx = X(4); % car forward velocity
    Vy = X(5); % car left velocity
    delta = X(6); % steeting angle
    t = X(7); % time

    %% slip and tyre forces
    Zf = (Vy+lf*(otheta_dot))/ Vx; % angle of velocity of front wheel relative to front of car
    Bf = delta-Zf; % slip angle of front wheel
    Ff = cb*Bf; % force of front wheel
    
    Zr = (Vy-lr*(otheta_dot))/ Vx; % angle of velocity of front wheel relative to front of car
    Br = -Zr; % slip angle of front wheel
    Fr = cb*Br; % force of front wheel

    %% velocities
    ey_dot = Vy*cos(etheta) + Vx*sin(etheta); % velocity perpendicular to the track 
    
    %% accelerations
    Vx_dot = accel;% - (Ff*sin(delta))/m; % forward acceleration
    Vy_dot = (Ff + Fr)/m; % lateral/left acceleration *cos(delta)
    otheta_ddot = (Ff*lf-Fr*lr)/I; % angular acceleration *cos(delta)

    %% S stuff
    s_dot = (Vx*cos(etheta) - Vy*sin(etheta))/(1-ey*K); % ds/dt - differnece in centerline distance with respect to time


    %% next values
    X_dash = zeros([7, 1]);

    X_dash(1) = ey_dot/s_dot; % ey
    X_dash(2) = otheta_dot/s_dot + stheta_dot; % theta
    X_dash(3) = otheta_ddot/s_dot; % theta_dot
    X_dash(4) = Vx_dot/s_dot; % Vx
    X_dash(5) = Vy_dot/s_dot; % Vy
    X_dash(6) = delta_dot/s_dot; % delta
    X_dash(7) = 1/s_dot; % time - dt/ds - difference in time with respect to centerline distance

    
    debug = zeros(1, 3);
    debug(1) = Ff;
    debug(2) = Fr;
    debug(3) = K;

end

function [xy] = track2world(state, track_table_row)
    % converts start coordinates (from state vec) into world coordinates
    % (s, ey) => (x, y)

    % inputs:
    % state - state vec [ey, etheta, otheta_dot, vx, vy, phi, t]
        % only ey is used
    % track_table_row - matching row from track table [s, x, y, K, ...]
        % s and angle are used
        % s coord is taken from here not the state vec

    angle = track_table_row(5);
    X = track_table_row(2);
    Y = track_table_row(3);
    ey = state(1);
    xy = [X - ey*sin(angle), Y + ey*cos(angle)];
end

