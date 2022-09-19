function X_next = stateFcn(X, U)%, Ts, trackFcn, trackOffset)
    % consts
    Ts = 0.1;
    
    X_next = [0 0 0 0 0 0];

    % find x/y pos
    X_next(1) = X(1) + X(3)*Ts; %x
    X_next(2) = X(2) + X(4)*Ts; %y

    % use forces to find velocities
    X_next(3) = X(3) + U(1)*Ts; %x_dot
    X_next(4) = X(4) + U(2)*Ts; %y_dot

    % update s
    X_next(5) = X(5) + X(6)*Ts; %s
    X_next(6) = X(6) + U(3)*Ts; %s_dot
    
end