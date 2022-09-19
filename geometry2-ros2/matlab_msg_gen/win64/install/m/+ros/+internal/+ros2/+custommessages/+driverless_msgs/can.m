function [data, info] = can
%Can gives an empty data for driverless_msgs/Can
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/Can';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.id_type, info.id_type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.dlc, info.dlc] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
info.MessageType = 'driverless_msgs/Can';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'id';
info.MatPath{3} = 'id_type';
info.MatPath{4} = 'dlc';
info.MatPath{5} = 'data';
