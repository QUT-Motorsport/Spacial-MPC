function [X_dash, debug] = dbike_model(X, U, track)
    %% parameters
    m = 220; % mass (kg)
    I = 140; % Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53;
    lf = Wheelbase*0.45; % dist from COG to front wheel
    lr = Wheelbase*0.55; % dist from COG to rear wheel
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
    Zf = atan2(Vy+lf*(otheta_dot), Vx); % angle of velocity of front wheel relative to front of car
    Bf = delta-Zf; % slip angle of front wheel
    Ff = cb*Bf; % force of front wheel
    
    Zr = atan2(Vy-lr*(otheta_dot), Vx); % angle of velocity of front wheel relative to front of car
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

%     if(s_dot <= 0)
%         disp("distance crime")
%     end
    
    %% next values
    X_dash = zeros([7, 1]);

    X_dash(1) = ey_dot/s_dot; % ey
    X_dash(2) = otheta_dot/s_dot + stheta_dot; % theta
    X_dash(3) = otheta_ddot/s_dot; % theta_dot
    X_dash(4) = Vx_dot/s_dot; % Vx
    X_dash(5) = Vy_dot/s_dot; % Vy
    X_dash(6) = delta_dot/s_dot; % delta
    X_dash(7) = 1/s_dot; % time - dt/ds - difference in time with respect to centerline distance

    
    debug = zeros(1, 2);
    debug(1) = Ff;
    debug(2) = Fr;

end