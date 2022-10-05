%% track setup
clear vars
clc

%% track lookup - plz fix this shit future me
% since this mpc simulates in distance steps the track must be discretised
% in those distance steps

% step
Ts = 1;

% get track
s = linspace(0, 150, 10000)';
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
track_table = zeros([floor(sum_dists(end)/Ts), 6]); 
for i = 1:length(track_table)
    s = (i-1)*Ts;
    [m,j] = min(abs(sum_dists - s));

    track_table(i, :) = [sum_dists(j), HDtrack(j, :), curve(j), angles(j), 0];
end
track_table(1:end-1, 6) = track_table(2:end, 5)-track_table(1:end-1, 5);
track_table(end, 6) = track_table(end-1, 6);


%% MPC setup
PredictionHorizon = 10;
InputHorizon = 3;
X_init = [-0.0600   -0.0055   -0.1325    2.0000   -0.1115   -0.1002    3.1574]';%[0.1 0 0 0.1 0 0 0]'; % ey, etheta, otheta_dot, Vx, Vy, delta, time
num_states = length(X_init);

input_UB = [ones(1, InputHorizon)*pi/4/2; ones(1, InputHorizon)*1; ones(1, InputHorizon)]; % steering rate (rad/s), accel (m/s/s), constraint violations (0 to 1 for no volation to max violation)
input_LB = [-ones(1, InputHorizon)*pi/4/2; -ones(1, InputHorizon)*1; zeros(1, InputHorizon)];

%% sim
l = size(track_table, 1) - 5 - PredictionHorizon;  % simulation steps - simulate to end of track
opt = optimoptions('fmincon','Algorithm','active-set', 'MaxFunctionEvaluations', 1e13, 'MaxIterations', 1e4, 'Display', 'none');%, 'SpecifyObjectiveGradient',true);

states = zeros(l+1, num_states); % record states
inputs = zeros(l, 3, InputHorizon); % record inputs
cost = zeros(1, l); % record costs
pos = zeros(l, 2); % record x-y of nearest point on track (used in coordintate conversions)

% simulate first step
states(1, :) = X_init;
U = zeros(2, InputHorizon);
[f, fnonlcons] = getnp(states(1, :)', track_table(1:1+PredictionHorizon, :), PredictionHorizon, InputHorizon, Ts);
[U, C] = fmincon(f, zeros([3, InputHorizon]),[],[],[],[],input_LB,input_UB, fnonlcons, opt);
cost(1) = C;
inputs(1, :, :) = U;
U=U
fX = stateChangeBig(states(1, :)', U, track_table(1:1+PredictionHorizon, :), Ts);
states(2, :) = fX(:, 1)';
% convert the first steps from track coordinates to world coordintates
angle = track_table(1, 5);
X = track_table(1, 2);
Y = track_table(1, 3);
ey = states(1, 1);
pos(1, :) = [X - ey*sin(angle), Y + ey*cos(angle)];

% create figure and simulate all other steps
% cost(1) = info.Cost;
figure(1)
hold on
% pause(1)
for i = 2:l

    disp('################')
    disp(i) % display sim step number

    % simulate
    tic()
    U(:, 1:end-1) = squeeze(inputs(i-1, :, 2:end));%zeros(2, InputHorizon);
    U(:, end) = U(:, end-1);
    [f, fnonlcons] = getnp(states(i, :)', track_table(i:i+PredictionHorizon, :), PredictionHorizon, InputHorizon, Ts);
    [U, C] = fmincon(f, U,[],[],[],[],input_LB,input_UB, fnonlcons, opt);
    cost(i) = C;
%     U(1, 1) = cos(i*Ts*2*pi*10)*0.03;
%     U(1, 1) = states(i, 1)*-0.1 - states(i, 6)*1 - states(i, 2)*1;
    inputs(i, :, :) = U;
    toc()
%     U=U
    con = fnonlcons(U);
%     tic()
%     a = knState(states(i, 1:end-1), inputs(i, :, 1), track_table(i, :), Ts);
%     toc()

%     tic()
    disp('---------------')
    fX = stateChangeBig(states(i, :)', U, track_table(i:i+PredictionHorizon, :), Ts);
%     eys = fX(1, :)
%     Rs = 1./track_table(i+1:i+PredictionHorizon, 4)'
%     con = con(end-9:end)'
%     states(i+1, :) = stateChange(states(i, :)', inputs(i, :, 1), track_table(i, :), Ts);
    states(i+1, :) = fX(:, 1)';
%     toc()
%     d = states(i+1, end-1)
%     v = states(i+1, 4)
%     ey = states(i+1, 1)
%     disp(debug)
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
    plot(pos(1:i, 1), pos(1:i, 2), 'r') % path so far
%     plot(X, Y, 'kX') % closest point on track
%     plot([X pos(i, 1)], [Y pos(i, 2)], 'k') % line between car and closest point on track
    
    
    [trash, debug] = dbike_model(states(i, :)', inputs(i, :, 1), track_table(i, :));
    plt_bike(states(i, :)', debug, track_table(i, :), 'black', 0)
    for k = 1:PredictionHorizon
        j = min(k, InputHorizon);
        [trash, debug] = dbike_model(fX(:, k), inputs(i, :, j), track_table(i+k, :));
        plt_bike(fX(:, k), debug, track_table(i+k, :), 'magenta', 0)
    end
    
    r = max(PredictionHorizon*Ts*1.2, 5);
    xlim([pos(i, 1)-r,  pos(i, 1)+r])
    ylim([pos(i, 2)-r,  pos(i, 2)+r])

    legend("Track", "Car Path", "Car", "Car Predictions")%, "Cars Position on Track"
    xlabel("x position (m)")
    ylabel("y position (m)")
    drawnow
end