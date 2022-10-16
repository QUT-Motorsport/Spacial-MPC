clc
%% parameters
Ts = 1;
PredictionHorizon = 5;
InputHorizon = 3;

MAX_STEETING_RATE = pi/4/2;
MAX_STEETING_ANGLE = 30*pi/180;
MAX_ACCELERATION = 1;

%% ROS Setup
machine_ip = '172.31.32.1';
setenv('ROS_IP',machine_ip);

node = ros2node("/matlab");
% pause(2) % wait for ros connection
ros2 topic list
state_sub = ros2subscriber(node, 'mpc/inputs/state', 'Reliability','besteffort');
track_sub = ros2subscriber(node, 'mpc/inputs/track', 'Reliability','besteffort');
control_pub = ros2publisher(node, 'driving_command');

%% get track & state
track = receive(track_sub, 20);
track_ilen = length(track.path);
decimation = 20;
track_x = zeros([1 floor(track_ilen/decimation)]);
track_y = track_x;
for i = 0:size(track_x, 2)-1
    track_x(i+1) = track.path(i*decimation+1).location.x;
    track_y(i+1) = track.path(i*decimation+1).location.y;
end



%% MPC steup
input_UB = [ones(1, InputHorizon)*MAX_STEETING_RATE; ones(1, InputHorizon)*MAX_ACCELERATION; ones(1, InputHorizon)];
input_LB = [-ones(1, InputHorizon)*MAX_STEETING_RATE; -ones(1, InputHorizon)*MAX_ACCELERATION; zeros(1, InputHorizon)];

end_s = track.path(end).s - (PredictionHorizon+1)*Ts; % no laps just yet
opt = optimoptions('fmincon','Algorithm','active-set', 'Display', 'iter-detailed', 'MaxFunctionEvaluations', 1e3);

%% run
receive(state_sub, 5); % first state can give bad data
current_state = receive(state_sub, 5);

track_i = 1;
while(track.path(track_i).s < current_state.s)
    track_i = track_i + 1;
end
previous_s = current_state.s - Ts;

tic_ID = tic;
% 
U = zeros([3, InputHorizon]);
U(3, :) = 1;
figure(1)
hold on
while(true)
    disp("-----------------")
    % wait until the car has advanced by Ts
    while(previous_s + Ts > current_state.s)
        % while waiting update state and track variables
        current_state = receive(state_sub, 5);
        while(track.path(track_i).s < current_state.s)
            track_i = track_i + 1;
        end

        % periodicly redraw track
        if(toc(tic_ID) > 0.2)
            tic_ID = tic;
            cla
            axis equal
            plot(track_x, track_y)
    
            % draw predictions
            [trash, debug] = dbike_model(state_vec, U, track_vec(1, :));
            plt_bike(state_vec, debug, track_vec(1, :), 'black', 0)
            for k = 1:min(PredictionHorizon, size(X_pred, 2))
                j = min(k, InputHorizon);
                [trash, debug] = dbike_model(X_pred(:, k), U(:, j), track_vec(k, :));
                plt_bike(X_pred(:, k), debug, track_vec(k, :), 'magenta', 0)
            end
            
            % zoom
            car_pos = [track_vec(1, 2) - state_vec(1)*sin(track_vec(1, end-1)), track_vec(1, 3) + state_vec(1)*cos(track_vec(1, end-1))];
            r = max(PredictionHorizon*Ts*2, 5);
            xlim([car_pos(1)-r,  car_pos(1)+r])
            ylim([car_pos(2)-r,  car_pos(2)+r])
        end
    end
    disp(current_state.s - previous_s)
    previous_s = current_state.s;
%     previous_s = previous_s + Ts;

    tic()
    % conversion of data to matching format
    state_vec = [current_state.ey; current_state.etheta; current_state.otheta_dot; max(current_state.vx, 0.5); current_state.vy; current_state.d; 0];% double(current_state.t.sec)+double(current_state.t.nanosec)*10e-9];
    track_vec = zeros([PredictionHorizon+1, 6]);
    track_j = track_i;
    i = 1;
    while(i <= PredictionHorizon+1)
        while(track.path(track_j).s < current_state.s + Ts*(i-1))
            track_j = track_j + 1;
        end
        track_vec(i, :) = [track.path(track_j).s track.path(track_j).location.x track.path(track_j).location.y track.path(track_j).curvature track.path(track_j).track_angle 0];
        i = i + 1;
    end

    % run mpc
    
    U(:, 1:end-1) = U(:, 2:end);
    [f, fcons] = getnp(state_vec, track_vec, PredictionHorizon, InputHorizon, Ts);
    [U, C] = fmincon(f, [0 0 0; 0 0 0; 1 1 1],[],[],[],[],input_LB,input_UB, fcons, opt);
    toc()
    disp(U)
    
    % predict future
    X_pred = stateChangeBig(state_vec, U, track_vec, Ts);
    
    % send control message
    control_msg = ros2message(control_pub);
    control_msg.steering_angle = max(min(single(X_pred(end-1, 1)*(-pi/MAX_STEETING_ANGLE)), 0.5), -0.5);
    if(current_state.vx < 0.3)
        control_msg.acceleration = single(0.01)
    else
        control_msg.acceleration = max(min(single(U(2, 1)/100), 0.1), -0.1)
    end

    send(control_pub, control_msg);

    % draw track after mpc update
    tic_ID = tic;
    cla
    axis equal
    plot(track_x, track_y)
    
    % draw predictions
    [trash, debug] = dbike_model(state_vec, U, track_vec(1, :));
    plt_bike(state_vec, debug, track_vec(1, :), 'black', 0)
    for k = 1:PredictionHorizon
        j = min(k, InputHorizon);
        [trash, debug] = dbike_model(X_pred(:, k), U(:, j), track_vec(k, :));
        plt_bike(X_pred(:, k), debug, track_vec(k, :), 'magenta', 0)
    end
    
    % zoom
    car_pos = [track_vec(1, 2) - state_vec(1)*sin(track_vec(1, end-1)), track_vec(1, 3) + state_vec(1)*cos(track_vec(1, end-1))];
    r = max(PredictionHorizon*Ts*2, 5);
    xlim([car_pos(1)-r,  car_pos(1)+r])
    ylim([car_pos(2)-r,  car_pos(2)+r])
    
    if(max(fcons(U)) > 1.000000e-06) 
        cc = fcons(U);
        [mm, kk] = max(fcons(U))
        if(kk <=5)
            continue
        end
        disp("fuck u fmincon")
    end
    
end


