%% track setup
clear vars
clc

%% track lookup
% since this mpc simulates in distance steps the track must be discretised
% in those distance steps

% step
Ts = 1;

% get track
HDtrack = track();
HDtrackX = HDtrack(:, 1);
HDtrackY = HDtrack(:, 2);

track_table = generateTrackLookup(HDtrack, Ts);   


%% MPC setup
PredictionHorizon = 6;
InputHorizon = 5;
X_init = [0.1 0 0 0.1 0 0 0]'; %[-0.0600   -0.0055   -0.1325    2.0000   -0.1115   -0.1002    3.1574]';% ey, etheta, otheta_dot, Vx, Vy, delta, time
num_states = length(X_init);


%% sim
simL = size(track_table, 1) - 5 - PredictionHorizon;  % simulation steps - simulate to end of track

states = zeros(simL+1, num_states); % record states
states(1, :) = X_init;
inputs = zeros(simL, 3, InputHorizon); % record inputs
cost = zeros(1, simL); % record costs

pos = zeros(simL, 2); % record x-y of car

% simulate first step
[U, fX, C] = runMPC(states(1, :)', zeros([3, InputHorizon]), track_table(1:1+PredictionHorizon, :), Ts);
cost(1) = C;
inputs(1, :, :) = U;
states(2, :) = fX(:, 1)';

% convert the first steps from track coordinates to world coordintates
pos(1, :) = track2world(states(1, 1), track_table(1, :));

% create figure and simulate all other steps
figure(1)
hold on
for i = 2:simL

    disp('################')
    disp(i) % display sim step number

    % %  simulate
    tic()
    
    % get starting input
    U(:, 1:end) = squeeze(inputs(i-1, :, :))
    U(:, 1:end-1) = U(:, 2:end)
    
    % get only relevant track data
    sub_track = track_table(i:i+PredictionHorizon, :);

    % current state vec
    state = states(i, :)';

    % run mpc 
    [U, fX, C] = runMPC(state, U, sub_track, Ts);   

    % store stuff
    states(i+1, :) = fX(:, 1)';
    cost(i) = C;
    inputs(i, :, :) = U;

    toc()

    
    % convert from track coordinates to world coordinates
    pos(i, :) = track2world(states(i, 1), track_table(i, :));
    
    % plot shit - clean up later
    cla
    axis equal
    plot(HDtrackX, HDtrackY, 'b') % track
    plot(pos(1:i, 1), pos(1:i, 2), 'r') % path so far    
    
    [trash, debug] = dbike_model(states(i, :)', inputs(i, :, 1), track_table(i, :));
    plt_bike(states(i, :)', debug, track_table(i, :), 'black', 0)
    for k = 1:PredictionHorizon
        j = min(k, InputHorizon);
        [trash, debug] = dbike_model(fX(:, k), inputs(i, :, j), track_table(i+k, :));
        plt_bike(fX(:, k), debug, track_table(i+k, :), 'magenta', 0)
    end
    
    r = max(PredictionHorizon*Ts*2, 5);
    xlim([pos(i, 1)-r,  pos(i, 1)+r])
    ylim([pos(i, 2)-r,  pos(i, 2)+r])

    legend("Track", "Car Path", "Car", "Car Predictions")%, "Cars Position on Track"
    xlabel("x position (m)")
    ylabel("y position (m)")
    drawnow
end