function [trackXY] = track()
    s = linspace(0, 150, 10000)';
    s0 = 0;

    x =  s;
    y = sin(s*2*pi/40).*5;
    trackXY = [x y];
end