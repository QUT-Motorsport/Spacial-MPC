    function X_next = stateFcn_s(X, U, track, Ts)
    
    % get states
    ey = X(1);
    Vt = X(2);
    Vn = X(3);
%     si = round(X(4)); % matlab has issues with ints
    si = X(4);
    t = X(5);
    
    % more fixes for matlabs issues
    sii = si
%     if sii <= 1
%         sii = 2;
%     else 
%         if sii >= size(track, 1)
%             sii = size(track, 1)-1;
%         end
%     end
    
    % get inputs
    Ft = U(1);
    Fn = U(2);
    
    % get track details
    s = track(sii, 1);
    Xs = track(sii, 2);
    Ys = track(sii, 3);
    K = track(sii, 4);

    x1 = track(sii-1, 2);
    x2 = track(sii,   2);
    x3 = track(sii+1, 2);
    y1 = track(sii-1, 3);
    y2 = track(sii,   3);
    y3 = track(sii+1, 3);
    dtheta = atan2(y3-y2, x3-x2) - atan2(y2-y1, x2-x1);
    
    % calcualte time derivatives unit/s
    ey_dot = Vn; % unit = m
    Vt_dot = Ft/1; % unit = N
    Vn_dot = Fn/1; % unit = N
    s_dot = Vt/(1-ey*K); % unit = m
    t_dot = 1; % unit = s
    
    % calcualte distance derivatives unit/m
    ey_dash = ey_dot/s_dot; % unit = m
    Vt_dash = Vt_dot/s_dot; % unit = N
    Vn_dash = Vn_dot/s_dot; % unit = N
    s_dash = 1; % unit = m
    t_dash = t_dot/s_dot; % unit = s
    
    % calculate next states
    X_next = sym('xn', [5 1]);%zeros([1, 5])';
    X_next(1) = ey + ey_dash*Ts;
    X_next(2) = Vt*cos(dtheta) + Vn*sin(dtheta) + Vt_dash*Ts;
    X_next(3) = Vn*cos(dtheta) - Vt*sin(dtheta) + Vn_dash*Ts;
    X_next(4) = si  + s_dash;
    X_next(5) = t  + t_dash*Ts;

end
