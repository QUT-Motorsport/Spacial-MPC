function cost = costFcn(X, U, e, data)%, Ts, trackFcn, trackOffset)
    %consts
    trackFcn = @track;
    trackOffset = 0;
    p = data.PredictionHorizon;

    % x-y of predicted closest point on track
    s = X(:, 5);
    [trackX, trackY] = trackFcn(s, trackOffset);  
    [trackX2, trackY2] = trackFcn(s+0.01, trackOffset);    
    
    %costs
    Q = [0 0 0 0 0 0; % states
         0 0 0 0 0 0;
         0 0 0 0 0 0;
         0 0 0 0 0 0;
         0 0 0 0 5 0;
         0 0 0 0 0 0];
    Qm = [1 0; 
          0 10];  % dist from car to predicted closest point on track [perpendicular, parrallel]
    R = [0.1 0 0; % inputs
         0 0.1 0;
         0 0 0.01];

    X_target = [0 0 0 0 X(1, 5)+2 0]; % always trying to move 2 meters along the track over the prediction orizon
    
    % add costs
    cost = 0;
    for i = 1:p+1
        x = X(i, 1);
        y = X(i, 2);
        X_hat = X(i, :) - X_target;

        m = sqrt((trackX(i)-x).^2 + (trackY(i)-y).^2);

        track_angle = atan2(trackY(i) - trackY2(i), trackX(i) - trackX2(i));
        m_angle = atan2(trackY(i) - y, trackX(i) - x);
        m_per = sin(track_angle-m_angle)*m;
        m_par = cos(track_angle-m_angle)*m;
        x_m = [m_per, m_par];

        cost = cost + X_hat*Q*X_hat' + U(i, :)*R*U(i, :)' + [m_per, m_par]*Qm*[m_per, m_par]';

    end
end