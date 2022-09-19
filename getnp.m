function [np, np_equ] = getnp(X0, track, prediction_horizon, input_horizon, Ts)

    np = @(Z) costFcn(Z, X0, track, Ts);

    np_equ = @(Z) nonlcons(Z, X0, track, prediction_horizon, input_horizon, Ts);
end