%% track setup
clear vars
clc

%% track lookup
% since this mpc simulates in distance steps the track must be discretised
% in those distance steps

% step
Ts = 0.1;

% get track
s = linspace(0, 20, 10000)';
[HDtrackx, HDtracky] = track(s, -2*pi);
HDtrack = [HDtrackx, HDtracky];
t1 = HDtrack(1:end-1, :);
t2 = HDtrack(2:end, :);

% dist between all points in track
dists = sqrt(sum((t2-t1).^2, 2));

% sum distance over track and get curvature at each point
sum_dists = zeros([length(dists) + 1, 1]);
curve = zeros([length(dists) + 1, 1]);
angles = zeros([length(dists) + 1, 1]);
dangles = zeros([length(dists) + 1, 1]);
for i = 2:length(dists) + 1
    sum_dists(i) = sum_dists(i-1) + dists(i-1);
    

    x1 = HDtrackx(i-1);
    x2 = HDtrackx(i);

    y1 = HDtracky(i-1);
    y2 = HDtracky(i);

    angles(i-1) = atan2(y2-y1, x2-x1);
    
    if i >= length(dists) + 1
        continue
    end
    x3 = HDtrackx(i+1);
    
    y3 = HDtracky(i+1);

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
dangles(1) = dangles(2);
dangles(end) = dangles(end-1);
angles(end) = angles(end-1);

% lookup table for MPC - cut down from full data
track_table = zeros([floor(sum_dists(end)/Ts), 6]); 
for i = 1:length(track_table)
    s = (i-1)*Ts;
    [m,j] = min(abs(sum_dists - s));

    track_table(i, :) = [sum_dists(j), HDtrack(j, :), curve(j), angles(j), 0];
end
track_table(1:end-1, 6) = track_table(2:end, 5)-track_table(1:end-1, 5);
track_table(end, 6) = track_table(end-1, 6);


%% MPC setup
PredictionHorizon = 30;
InputHorizon = 8;
X_init = [0 0 0 0.2 0];

input_UB = [ones(1, InputHorizon)*pi/2; ones(1, InputHorizon)];
input_LB = [-ones(1, InputHorizon)*pi/2; -ones(1, InputHorizon)];

%% sim
l = size(track_table, 1) - 5 - PredictionHorizon;  % simulation steps - simulate to end of track
opt = optimoptions('fmincon','Algorithm','active-set', 'Display', 'notify');%, 'MaxFunctionEvaluations', 3000, 'SpecifyObjectiveGradient',true);

states = zeros(l+1, 5); % record states
inputs = zeros(l, 2, InputHorizon); % record inputs
cost = zeros(1, l); % record costs
pos = zeros(l, 2); % record x-y of nearest point on track (used in coordintate conversions)

% simulate first step
states(1, :) = X_init;
[f, fnonlcons] = getnp(states(1, :), @knState, track_table(1:PredictionHorizon, :), PredictionHorizon, InputHorizon, Ts);
[U, C] = fmincon(f, zeros([2, InputHorizon]),[],[],[],[],input_LB,input_UB, fnonlcons, opt);
cost(1) = C;
inputs(1, :, :) = U;
states(2, :) = knState(X_init, inputs(1, :), track_table(1, :), Ts);

% convert the first steps from track coordinates to world coordintates
angle = track_table(1, 5);
X = track_table(1, 2);
Y = track_table(1, 3);
ey = states(1, 1);
pos(1, :) = [X - ey*sin(angle), Y + ey*cos(angle)];

% create figure and simulate all other steps
% cost(1) = info.Cost;
figure(2)
hold on
for i = 2:l
    disp(i) % display sim step number

    % simulate
    tic()
    [f, fnonlcons] = getnp(states(i, :), @knState, track_table(i:(i+PredictionHorizon-1), :), PredictionHorizon, InputHorizon, Ts);
    [U, C] = fmincon(f, U,[],[],[],[],input_LB,input_UB, fnonlcons, opt);
    cost(i) = C;
    inputs(i, :, :) = U;
    toc()
    states(i+1, :) = knState(states(i, :), inputs(i, :, 1), track_table(i, :), Ts);
    disp([states(i+1, 1), 1/track_table(i, 4)])
%     cost(i) = info.Cost;
    
    % convert from track coordinates to world coordinates
    angle = track_table(i, 5);
    X = track_table(i, 2);
    Y = track_table(i, 3);
    ey = states(i, 1);
    pos(i, :) = [X - ey*sin(angle), Y + ey*cos(angle)];
    
    %plot
    cla
    axis equal
    plot(HDtrackx, HDtracky, 'b') % track
    plot(pos(i, 1), pos(i, 2), 'rO') % current pos
    plot(pos(1:i, 1), pos(1:i, 2), 'r') % path so far
    plot(X, Y, 'kX') % closest point on track
    plot([X pos(i, 1)], [Y pos(i, 2)], 'k') % line between car and closest point on track
%     legend("Track", "Car", "Car Path", "Cars Position on Track")
    xlabel("x position (m)")
    ylabel("y position (m)")
    drawnow
end