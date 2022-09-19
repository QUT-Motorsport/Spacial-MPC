function X_dash = carODE(X, U, s, track, Ts)
    Ih = size(U, 2);
    Ph = size(track, 1)-1;
    
    i = min(floor(s/Ts)+1, Ph);
    j = min(i, Ih);
    
    t = s-Ts*i;
    t = t/Ts;
    track_row = track(i, :)*(1-t) + track(i+1, :)*t;
    
    [X_dash, ~] = dbike_model(X, U(:, j), track_row);
end