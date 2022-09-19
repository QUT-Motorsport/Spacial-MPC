function [data, info] = cone
%Cone gives an empty data for driverless_msgs/Cone
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/Cone';
[data.location, info.location] = ros.internal.ros2.messages.geometry_msgs.point;
info.location.MLdataType = 'struct';
[data.color, info.color] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.BLUE, info.BLUE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.YELLOW, info.YELLOW] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.ORANGE_BIG, info.ORANGE_BIG] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.ORANGE_SMALL, info.ORANGE_SMALL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.UNKNOWN, info.UNKNOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
info.MessageType = 'driverless_msgs/Cone';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'location';
info.MatPath{2} = 'location.x';
info.MatPath{3} = 'location.y';
info.MatPath{4} = 'location.z';
info.MatPath{5} = 'color';
info.MatPath{6} = 'BLUE';
info.MatPath{7} = 'YELLOW';
info.MatPath{8} = 'ORANGE_BIG';
info.MatPath{9} = 'ORANGE_SMALL';
info.MatPath{10} = 'UNKNOWN';
