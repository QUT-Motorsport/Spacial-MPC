function X_next = knState(X, U, track, Ts)
    ey = X(1); % dist from track centerline
    et = X(2); % angle relative to cenerline direcction
    d = X(3); % steering angle
    v = X(4); % forward velocity
    t = X(5); % time

    % constants relating to physical aspects of the car
    C1 = 0.5; % midpoint of car
    C2 = 1/2; % length of car
    
    % time deriavatives 
    K = track(4); % track curvature
    delta_angle = track(6);
    x_dot = v*cos(d); % car coordinates (x forward, y left)
    y_dot = v*sin(d)*C1;
    
    ey_dot = x_dot*sin(et) + y_dot*cos(et);
    et_dot = v*sin(d)*C2;
    d_dot = U(1);
    v_dot = U(2);
    t_dot = 1;

    s_dot = (x_dot*cos(et) + y_dot*sin(et))/(1-ey*K);
    
    % distance derivatives
    ey_dash = ey_dot/s_dot;
    et_dash = et_dot/s_dot;
    d_dash  = d_dot/s_dot;
    v_dash  = v_dot/s_dot;
    t_dash  = t_dot/s_dot;
    
    % return
    X_next = [ey + ey_dash*Ts ;
              et + et_dash*Ts - delta_angle;
              d  + d_dash*Ts ;
              v  + v_dash*Ts ;
              t  + t_dash*Ts];
    
    X_next(2) = mod(X_next(2) + pi, 2*pi) - pi; % wrap angles -pi to pi
end