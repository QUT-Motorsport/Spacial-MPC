function [data, info] = selectMissionRequest
%SelectMission gives an empty data for driverless_msgs/SelectMissionRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/SelectMissionRequest';
[data.mission, info.mission] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'driverless_msgs/SelectMissionRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'mission';
