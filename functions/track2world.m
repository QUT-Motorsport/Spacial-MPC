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