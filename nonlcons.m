function [c, ceq] = nonlcons(U, X0, track, prediction_horizon, input_horizon, Ts)
    
    ceq= []; % no equality constraints   

    m = 220; % mass (kg)
    I = 140; % Z axis moment of initia (kg*m^2)
    Wheelbase = 1.53;
    lf = Wheelbase*0.5; % dist from COG to front wheel
    lr = Wheelbase*0.5; % dist from COG to rear wheel
    cb = 21934*2; % force vs slip angle for typers in linear region N/rad

    %% constraint softening
    
    % parameters - ECR = how much violation to allow (matches state units
    ECR_eymax = 1.5; % allow half a meter of violation
    ECR_vmax = 5;
    ECR_vmin = 0.09;
    ECR_dmax = 0.1;
    ECR_sdotmin = 0.09;
    ECR_ethetamax = pi/3-pi/4;

    %% expanding equ
    X0(end) = 0; % reset time (it is abitrary so measuring from zero is easier)
    X = stateChangeBig(X0, U, track, Ts);
%     K = [track(1:end-1, 4) track(2:end, 4)];
%     [~, i] = max(abs(K), [], 2);
%     i = (0:length(i)-1)*2 + i';
%     K = K(i)';
    K = track(2:end, 4);
    

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
    c = ones([prediction_horizon*9 1])*-1; % 1 per constraint per timestep
    c2 = ones([input_horizon*3 1])*-1; % 1 per constraint per timestep - for input constraints (not necessary atm)
%     c3 = ones([prediction_horizon-1, 1])*-1; % for non-decreasing time
    if(size(c, 1) == 0)
        return
    end
    
    c(1:Ph) = X(1, :)'.^2 - 1.5^2 - (ECR_eymax*epsil).^2; % |ey| < 1.5
    c(Ph+1:Ph*2) = 0.1 - X(4, :)' - ECR_vmin*epsil; % v > 0.1
    c(Ph*2+1:Ph*3) = X(4, :)' - 5 - ECR_vmax*epsil; % v < 5
    c(Ph*3+1:Ph*4) = X(6, :)'.^2 - (0.2)^2 - (ECR_dmax*epsil).^2; % |d| < 0.2
    c(Ph*4+1:Ph*5) = 0.1 - (X(4, :)'.*cos(X(2, :)') - X(5, :)'.*sin(X(2, :)')) - ECR_sdotmin*epsil; % s_dot > 0.1
%     c(Ph*5+1:Ph*6) = X(2, :)'.^2 - (pi/4)^2 - (ECR_ethetamax*epsil).^2; % |etheta| < pi/4
    c(Ph*6+1:Ph*7) = (X(6, :)' - atan2(X(5, :)'+lf*X(3, :)', X(4, :)')).^2 - 0.18^2; % |front slip angle| < 0.18
    c(Ph*7+1:Ph*8) = atan2(X(5, :)'-lr*X(3, :)', X(4, :)').^2 - 0.18^2; % |rear slip angle| < 0.18
    c(Ph*8+1:Ph*9) = X(1, :)'.^2 - (0.5./K).^2 - (0.1./K).^2 .* epsil; % |ey| < |1/k| (with max epsil actualy |ey| < |0.9/K|)
    
    Ih = input_horizon;
%     c2(1:Ih) = U(1, :)'.^2 - (pi/4/2)^2;
%     c2(Ih+1:Ih*2) = U(2, :)'.^2 - (1)^2;
%     c2(Ih*2+1:Ih*3) = (U(3, :)' - 0.5).^2 - (0.5)^2;

    % non-decreasing time (earlier time - later time)
    c3 = X(end, 1:end-1)' - X(end, 2:end)'; % time delta > 0 (-time delta < 0)

    c = [c;c2;c3];

end