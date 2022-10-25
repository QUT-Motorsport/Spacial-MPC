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