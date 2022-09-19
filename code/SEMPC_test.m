%% track setup
clear vars
clc

%% track lookup
% since this mpc simulates in distance steps the track must be discretised
% in those distance steps

% step
Ts = 0.1;

% get track
s = linspace(0, 15, 10000)';
[HDtrackx, HDtracky] = track(s, 0);
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
track_table = zeros([floor(sum_dists(end)/Ts), 5]); 
for i = 1:length(track_table)
    s = (i-1)*Ts;
    [m,j] = min(abs(sum_dists - s));

    track_table(i, 1:5) = [sum_dists(j), HDtrack(j, :), curve(j), angles(j)];
end


%% MPC setup

% define mpc and set parameters
nlobj = nlmpc(5, 5, 2);

nlobj.Ts = 0.1;
nlobj.PredictionHorizon = 10;
nlobj.ControlHorizon = 3;
nlobj.Model.IsContinuousTime=false;
nlobj.Model.NumberOfParameters = 2;
nlobj.Model.StateFcn = "stateFcn_s";
nlobj.Optimization.CustomCostFcn = 'costFcn_s';



X_init = [0.1 0.02 0 3 0];

% parameters to pass track_table to the mpc
validateFcns(nlobj, X_init, [0 0], [], {track_table, Ts});
nloptions = nlmpcmoveopt;
nloptions.Parameters = {track_table, Ts};

%% sim
l = size(track_table, 1) - 5 - nlobj.PredictionHorizon;  % simulation steps - simulate to end of track

states = zeros(l+1, 5); % record states
inputs = zeros(l, 2); % record inputs
cost = zeros(1, l); % record costs
pos = zeros(l, 2); % record x-y of nearest point on track (used in coordintate conversions)

% simulate first step
states(1, :) = X_init;
[inputs(1, :), opt, info] = nlmpcmove(nlobj, X_init, [0, 0], [], [], nloptions);
states(2, :) = stateFcn_s(X_init, inputs(1, :), track_table, Ts);

% convert the first steps from track coordinates to world coordintates
si = states(1, 4);
angle = track_table(si, 5);
X = track_table(si, 2);
Y = track_table(si, 3);
ey = states(1, 1);
pos(1, :) = [X - ey*sin(angle), Y + ey*cos(angle)];

% create figure and simulate all other steps
cost(1) = info.Cost;
figure(2)
hold on
for i = 2:l
    disp(i) % display sim step number

    % simulate
    tic()
    [inputs(i, :), opt, info] = nlmpcmove(nlobj, states(i, :), inputs(i-1, :), [], [], nloptions);
    toc()
    states(i+1, :) = stateFcn_s(states(i, :), inputs(i, :), track_table, Ts);
    cost(i) = info.Cost;
    
    % convert from track coordinates to world coordinates
    si = states(i, 4);
    angle = track_table(si, 5);
    X = track_table(si, 2);
    Y = track_table(si, 3);
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
    legend("Track", "Car", "Car Path", "Cars Position on Track")
    xlabel("x position (m)")
    ylabel("y position (m)")
    title("Simulaton of Distance-Based Controller")
    drawnow
end