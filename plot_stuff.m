figure(1)
hold on
cla
plot(out.u(:, 1), out.u(:, 2))
plot(out.x(:, 1), out.x(:, 2))
legend("input", "output")
hold off

figure(2)
hold on
cla
plot(out.tout, sqrt((out.u(:, 1) - out.x(:, 1)).^2 + (out.u(:, 2) - out.x(:, 2)).^2))

figure(3)
hold on
cla
% plot(out.tout, out.F(:, 1))
% plot(out.tout, out.F(:, 2))
plot(out.F(:, 1), out.F(:, 2))
legend("force X", "force Y")
