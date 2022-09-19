function [data, info] = reset
%Reset gives an empty data for driverless_msgs/Reset
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/Reset';
[data.reset, info.reset] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'driverless_msgs/Reset';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'reset';
