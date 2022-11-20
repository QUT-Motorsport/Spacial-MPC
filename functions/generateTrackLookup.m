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