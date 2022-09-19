function [data, info] = selectMissionResponse
%SelectMission gives an empty data for driverless_msgs/SelectMissionResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/SelectMissionResponse';
[data.confirmation, info.confirmation] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'driverless_msgs/SelectMissionResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'confirmation';
