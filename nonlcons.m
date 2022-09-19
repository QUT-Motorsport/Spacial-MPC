function [c, ceq] = nonlcons(U, X0, track, prediction_horizon, input_horizon, Ts)
    
    ceq= []; % no equality constraints   

    %% constraint softening
    
    % parameters - ECR = how much violation to allow (matches state units
    ECR_eymax = 0.5; % allow half a meter of violation
    ECR_vmax = 3;
    ECR_vmin = 0.09;
    ECR_dmax = 0.1;
    ECR_sdotmin = 0.09;
    ECR_ethetamax = pi/3-pi/4;

    %% expanding equ
    X0(end) = 0; % reset time (it is abitrary so measuring from zero is easier)
    X = stateChangeBig(X0, U, track, Ts);

    Ph = size(X, 2); % is equal to prediction_horizon except when ode errors out
%     if(Ph ~= prediction_horizon)
%         disp("ode error")
%     end
    Ih = min(Ph, input_horizon);

    % epsil is constraint sofening input
    epsil = ones([Ph, 1]) * U(3, end); 
    epsil(1:Ih, :) = U(3, 1:Ih)';

    %% constraints
    % c(x) <= 0
    c = ones([prediction_horizon*6 1])*-1; % 1 ey+v+d constraint per timestep
    if(size(c, 1) == 0)
        return
    end
    
    c(1:Ph) = X(1, :)'.^2 - 0.5^2 - (ECR_eymax*epsil).^2; % |ey| < 0.5
    c(Ph+1:Ph*2) = 0.1 - X(4, :)' - ECR_vmin*epsil; % v > 0.1
    c(Ph*2+1:Ph*3) = X(4, :)' - 2 - ECR_vmax*epsil; % v < 2
    c(Ph*3+1:Ph*4) = X(6, :)'.^2 - (0.2)^2 - (ECR_dmax*epsil).^2; % |d| < 0.2
    c(Ph*4+1:Ph*5) = 0.1 - (X(4, :)'.*cos(X(2, :)') - X(5, :)'.*sin(X(2, :)')) - ECR_sdotmin*epsil; % s_dot > 0.1
    c(Ph*5+1:Ph*6) = X(2, :)'.^2 - (pi/4)^2 - (ECR_ethetamax*epsil).^2; % |etheta| < pi/4
end