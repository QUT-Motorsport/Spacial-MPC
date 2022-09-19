function [data, info] = coneWithCovariance
%ConeWithCovariance gives an empty data for driverless_msgs/ConeWithCovariance
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/ConeWithCovariance';
[data.cone, info.cone] = ros.internal.ros2.custommessages.driverless_msgs.cone;
info.cone.MLdataType = 'struct';
[data.covariance, info.covariance] = ros.internal.ros2.messages.ros2.default_type('double',4,0);
info.MessageType = 'driverless_msgs/ConeWithCovariance';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'cone';
info.MatPath{2} = 'cone.location';
info.MatPath{3} = 'cone.location.x';
info.MatPath{4} = 'cone.location.y';
info.MatPath{5} = 'cone.location.z';
info.MatPath{6} = 'cone.color';
info.MatPath{7} = 'cone.BLUE';
info.MatPath{8} = 'cone.YELLOW';
info.MatPath{9} = 'cone.ORANGE_BIG';
info.MatPath{10} = 'cone.ORANGE_SMALL';
info.MatPath{11} = 'cone.UNKNOWN';
info.MatPath{12} = 'covariance';
