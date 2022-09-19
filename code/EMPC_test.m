%% track setup
clear vars
clc

%% define mpc and set parameters
nlobj = nlmpc(6, 6, 3);

nlobj.Ts = 0.1;
nlobj.PredictionHorizon = 30;
nlobj.ControlHorizon = 3;
nlobj.Model.IsContinuousTime=false;
nlobj.Model.NumberOfParameters = 0;
nlobj.Model.StateFcn = "stateFcn";
nlobj.Optimization.CustomCostFcn = 'costFcn';

%% simulation
l = 52; % simulation steps

states = zeros(l+1, 6); % record states
inputs = zeros(l, 3); % record inputs   
cost = zeros(1, l); % record costs
s_err = zeros(l+1, 2); % record error in s state

% track centerline
s = linspace(0, 15, 10000);
[x, y] = track(s, 0);

% simulate first step
X_init = [0 0 0 0 0 0];
states(1, :) = X_init;
[inputs(1, :), opt, info] = nlmpcmove(nlobj, X_init, [0 0 0]); % solve MPC
states(2, :) = stateFcn(X_init, inputs(1, :)); % simulate
cost(1) = info.Cost;

[sm, si] = min(sqrt((x-states(1+1, 1)).^2 + (y-states(1+1, 2)).^2));
s_err(2, 1) = s(si);
s_err(2, 2) = states(2, 5) - s(si);
% create figure and simulate all other steps
figure(1)
for i = 2:l
    disp(i) % display sim step number

    % simulate
    tic()
    [inputs(i, :), opt, info] = nlmpcmove(nlobj, states(i, :), inputs(i-1, :)); % solve MPC
    toc()
    states(i+1, :) = stateFcn(states(i, :), inputs(i, :)); % simulate
    cost(i) = info.Cost;
    
    % plot
    hold on
    cla
    axis equal
    plot(x, y, 'b') % track
%     plot(x(1), y(1), 'bO') % start of track maker
    plot(states(i+1, 1), states(i+1, 2), 'rO') % current position
    plot(states(1:i+1, 1), states(1:i+1, 2), 'r') % path so far
    %plot predicted closest position on the track
    [sx sy] = track(states(i+1, 5));
    plot(sx, sy, 'kX')

    
    [sm, si] = min(sqrt((x-states(i+1, 1)).^2 + (y-states(i+1, 2)).^2));
    s_err(i+1, 1) = s(si);
    s_err(i+1, 2) = states(i, 5) - s(si);
    disp(states(i, 5) - s(si))

    sx2 = x(si);
    sy2 = y(si);
    plot(sx2, sy2, 'mX')
    plot([sx2 states(i+1, 1)], [sy2 states(i+1, 2)], 'm')
    plot([sx states(i+1, 1)], [sy states(i+1, 2)], 'k')

    legend("Track", "Car", "Car Path", "Cars Estimated Position on Track", "Cars True Position on Track")
    xlabel("x position (m)")
    ylabel("y position (m)")
    title("Simulaton of Time-Based Controller")
    drawnow

    
end



%%
figure(2)
cla
hold on
t = (1:length(s_err)) * 0.1;
plot(t, states(:, 5))
plot(t, s_err(:, 1))
plot(t, s_err(:, 2))
legend("Predicted S", "True S", "Error")
xlabel("Time (s)")
ylabel("S (m)")
title("Preticed vs Actual S")



