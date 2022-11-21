clc
%% parameters

MAX_STEETING_ANGLE = 30*pi/180;

%% ROS Setup
machine_ip = '172.17.16.1';
setenv('ROS_IP',machine_ip);

node = ros2node("/matlab");
% pause(2) % wait for ros connection
ros2 topic list
state_sub = ros2subscriber(node, 'mpc/inputs/state', 'Reliability','besteffort');
track_sub = ros2subscriber(node, 'mpc/inputs/track', 'Reliability','besteffort');
control_pub = ros2publisher(node, 'driving_command');

%% get track & state
track_msg = receive(track_sub, 20);

track_ilen = length(track_msg.path);
decimation = 1;
HDtrackX = zeros([floor(track_ilen/decimation) 1]);
HDtrackY = HDtrackX;
for i = 0:size(HDtrackX, 1)-1
    HDtrackX(i+1) = track_msg.path(i*decimation+1).location.x;
    HDtrackY(i+1) = track_msg.path(i*decimation+1).location.y;
end

HDtrack = [HDtrackX HDtrackY];

%% MPC steup
Ts = 1;
PredictionHorizon = 6;
InputHorizon = 2;
end_s = track_msg.path(end).s - (PredictionHorizon+1)*Ts; % no laps just yet

%% run
receive(state_sub, 5); % first state can give bad data
current_state = receive(state_sub, 5);

track_i = track_msg_loc(track_msg, current_state.s, 1);

U = zeros([3, InputHorizon]);
figure(1)
hold on
while(true)
    disp('################')
    current_state = receive(state_sub, 5);
    disp(track_i) % display sim step number

    % % run MPC
    tic()
    % get starting input
    U(:, 1:end-1) = U(:, 2:end);

    % conversion of data to matching format
    state = [current_state.ey; current_state.etheta; current_state.otheta_dot; max(current_state.vx, 0.1); current_state.vy; current_state.d; 0];% double(current_state.t.sec)+double(current_state.t.nanosec)*10e-9];

    % get only relevant track data    
    track_i = track_msg_loc(track_msg, current_state.s, track_i);
    track_i_end = track_msg_loc(track_msg, current_state.s+Ts*PredictionHorizon*2, track_i);
    sub_track = generateTrackLookup(HDtrack(track_i:track_i_end, :), Ts);
    sub_track = sub_track(1:PredictionHorizon+1, :);

    % run mpc    
    [U, fX, C] = runMPC(state, U, sub_track, Ts);
    toc()
    
    % send control message
%     control_msg = ros2message(control_pub);
%     control_msg.steering_angle = max(min(single(fX(end-1, 1)*(-pi/MAX_STEETING_ANGLE)), 0.5), -0.5);
%     if(current_state.vx < 0.3)
%         control_msg.acceleration = single(0.01)
%     else
%         control_msg.acceleration = max(min(single(U(2, 1)/100), 0.1), -0.1)
%     end
% 
%     send(control_pub, control_msg);

    % draw track after mpc update
    cla
    axis equal
    plot(HDtrackX, HDtrackY)
    
    % draw predictions
    [trash, debug] = dbike_model(state, U, sub_track(1, :));
    plt_bike(state, debug, sub_track(1, :), 'black', 0)
    for k = 1:PredictionHorizon
        j = min(k, InputHorizon);
        [trash, debug] = dbike_model(fX(:, k), U(:, j), sub_track(k, :));
        plt_bike(fX(:, k), debug, sub_track(k, :), 'magenta', 0)
    end
    
    % zoom
    car_pos = [sub_track(1, 2) - state(1)*sin(sub_track(1, end-1)), sub_track(1, 3) + state(1)*cos(sub_track(1, end-1))];
    r = max(PredictionHorizon*Ts*2, 5);
    xlim([car_pos(1)-r,  car_pos(1)+r])
    ylim([car_pos(2)-r,  car_pos(2)+r])
    
%     if(max(fcons(U)) > 1.000000e-06) 
%         cc = fcons(U);
%         [mm, kk] = max(fcons(U))
%         if(kk <=5)
%             continue
%         end
%         disp("fuck u fmincon")
%     end
    
end


