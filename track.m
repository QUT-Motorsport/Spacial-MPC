function [x,y] = track(s, s0)
%     s = s ;
    x =  s;%sin(s*2*pi/30)*5;%sin(s);%(max(s)-s+ s0).*cos(s);%
    y = sin(s*2*pi/30)*4;%s;%s*0;%exp(s/3-4);%1-cos(s);%e(max(s)-s+ s0).*sin(s);%s*0.5+1;%
end