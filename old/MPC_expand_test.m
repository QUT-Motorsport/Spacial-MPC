clear variables
clc
%% parameters
sim_time = 15;
X_init = [1; 1];
Ts = 0.2;
prediction_horizon = 7;
input_horizon = 4;

ph = prediction_horizon;
ih = input_horizon;

sim_steps = floor(sim_time/Ts)+1;


%% system
% U = [F]
% X' = [x', v'] = [v, F/m-x*k-v*b
b = 0;0.3;
m = 0.9;
k = 0;%1/m;
A = [0  1*Ts;
    -k*Ts/m -b*Ts/m];
B = [0; 1/m*Ts];
    
Ac = [];%[eye(input_horizon); -eye(input_horizon)]
Bc = [];%[ones([input_horizon 1])*0.5; ones([input_horizon 1])*0.5]


%% sim
X_sim = zeros([2 sim_steps+1]);
X_sim(:, 1) = X_init;
U_sim = zeros([input_horizon sim_steps+1]);
J_sim = zeros([1 sim_steps+1]);
figure(1)
cla
hold on
t = 0:Ts:Ts*sim_steps;
opt = optimoptions('fmincon','Algorithm','active-set', 'MaxFunctionEvaluations', 3000, 'Display', 'off');%, 'SpecifyObjectiveGradient',true);
for i = 2:sim_steps+1
    disp(i)
    % find U
    traj = zeros([2, ph]);
    traj(1, :) = linspace((i-1)*Ts, (i+ph-1)*Ts, ph);
    traj(2, :) = cos(traj(1, :));
    traj(1, :) = sin(traj(1, :));
    [np, X_equ] = getnp(X_sim(:, i-1), traj, ph, ih);
    tic()
    U_sim(:, i-1) = fmincon(np, zeros([1, input_horizon]),Ac,Bc, [], [], ones([1, ih])*-50, ones([1, ih])*50, @nonlcons, opt);
    toc()
    X_sim(:, i) = X_sim(:, i-1) + A*X_sim(:, i-1) + B*U_sim(1, i-1);
    cla
    plot(t(1:i), X_sim(1, 1:i))
    plot(t(1:i), X_sim(2, 1:i), '.-')
    plot(t, sin(t))
    plot(t, cos(t))
    plot(t(1:i-1), U_sim(1, 1:i-1))
    legend('x','v', 'tx', 'tv','U')
    drawnow
end
U_sim(:, end) = U_sim(:, end-1);

%% plotting
figure(1)
cla
hold on
plot(t, X_sim(1, :))
plot(t, X_sim(2, :), '.-')
plot(t, sin(t))
plot(t, cos(t))
plot(t, U_sim(1, :))
legend('x','v', 'tx', 'tv','U')
