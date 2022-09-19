function [data, info] = mPCCenterline
%MPCCenterline gives an empty data for driverless_msgs/MPCCenterline
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/MPCCenterline';
[data.path, info.path] = ros.internal.ros2.custommessages.driverless_msgs.mPCPathPoint;
info.path.MLdataType = 'struct';
info.path.MaxLen = NaN;
info.path.MinLen = 0;
info.MessageType = 'driverless_msgs/MPCCenterline';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'path';
info.MatPath{2} = 'path.location';
info.MatPath{3} = 'path.location.x';
info.MatPath{4} = 'path.location.y';
info.MatPath{5} = 'path.location.z';
info.MatPath{6} = 'path.track_angle';
info.MatPath{7} = 'path.curvature';
info.MatPath{8} = 'path.s';
