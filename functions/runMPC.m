function [U, X_pred, cost] = runMPC(state, Uinit, track_table, Ts) 
    %% calculated parameters
    Ih = size(Uinit, 2);
    Ph = size(track_table, 1) - 1;

    %% parameters
    input_UB = [ones(1, Ih)*pi/4/2; ones(1, Ih)*1; ones(1, Ih)]; % steering rate (rad/s), accel (m/s/s), constraint violations (0 to 1 for no volation to max violation)
    input_LB = [-ones(1, Ih)*pi/4/2; -ones(1, Ih)*1; zeros(1, Ih)];
    opt = optimoptions('fmincon','Algorithm','active-set', 'MaxFunctionEvaluations', 1e13, 'MaxIterations', 1e4, 'Display', 'final');%, 'SpecifyObjectiveGradient',true);
    
    %% 
    [f, fnonlcons] = getnp(state, track_table, Ph, Ih, Ts);
    [U, cost] = fmincon(f, Uinit,[],[],[],[],input_LB,input_UB, fnonlcons, opt);
    X_pred = stateChangeBig(state, U, track_table, Ts);
end