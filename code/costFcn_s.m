function cost = costFcn_s(X, U, e, data, track, Ts)%, Ts, trackFcn, trackOffset)
    % parameters
    p = data.PredictionHorizon;

    % costs
    Q = [10 0 0 0 0; % states
         0 1 0 0 0;
         0 0 0 0 0;
         0 0 0 0 0;
         0 0 0 0 0];
    R = [0.1 0; % inputs
         0 0.1];
    X_target = [0 1 0 0 1]; % always trying to move across the predicion horizon in 1 sec
    % note the extra costs/targets are to work around an issue with the MPC
    % toolbox
    
    cost = 0;
    for i = 1:p+1
        X_hat = X(i, :) - X_target;
        cost = cost + X_hat*Q*X_hat' + U(i, :)*R*U(i, :)';
    end
end
