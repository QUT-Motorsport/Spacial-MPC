function [data, info] = pathPoint
%PathPoint gives an empty data for driverless_msgs/PathPoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/PathPoint';
[data.location, info.location] = ros.internal.ros2.messages.geometry_msgs.point;
info.location.MLdataType = 'struct';
[data.turn_intensity, info.turn_intensity] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'driverless_msgs/PathPoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'location';
info.MatPath{2} = 'location.x';
info.MatPath{3} = 'location.y';
info.MatPath{4} = 'location.z';
info.MatPath{5} = 'turn_intensity';
