function X_next = stateChange(X, U, track, Ts)
%     a = tic;
%     disp('--------')
%     X = X
%     U = U
%     track = track
%     Ts = Ts
    ode = @(t, X) dbike_model(X, U, track);%;carODE(U, track);
    
%     options = odeset('MaxStep',Ts, 'InitialStep', Ts/3, 'RelTol', 1e-0, 'AbsTol', 5e-1);
    options = odeset('RelTol',1e-0,'AbsTol',1e-1);

    [solveS, solveX] = ode15s(ode, 0:Ts/2:Ts, X, options);
    X_next = solveX(end, :)';

%     X_next = ode(0, X)'*Ts+X';
    
%     k1 = ode(0, X);
%     k2 = ode(Ts/2, X+Ts/2*k1);
%     k3 = ode(Ts/2, X+Ts/2*k2);
%     k4 = ode(Ts, X+Ts*k3);
%     X_next = X + (k1+2*k2+2*k3+k4)*Ts/6;
%     toc(a)
end