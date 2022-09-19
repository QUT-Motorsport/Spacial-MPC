function [data, info] = mPCPathPoint
%MPCPathPoint gives an empty data for driverless_msgs/MPCPathPoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/MPCPathPoint';
[data.location, info.location] = ros.internal.ros2.messages.geometry_msgs.point;
info.location.MLdataType = 'struct';
[data.track_angle, info.track_angle] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.curvature, info.curvature] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.s, info.s] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'driverless_msgs/MPCPathPoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'location';
info.MatPath{2} = 'location.x';
info.MatPath{3} = 'location.y';
info.MatPath{4} = 'location.z';
info.MatPath{5} = 'track_angle';
info.MatPath{6} = 'curvature';
info.MatPath{7} = 's';
