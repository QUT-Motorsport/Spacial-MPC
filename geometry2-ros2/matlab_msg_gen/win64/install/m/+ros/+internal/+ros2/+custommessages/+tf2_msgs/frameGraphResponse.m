function [data, info] = frameGraphResponse
%FrameGraph gives an empty data for tf2_msgs/FrameGraphResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tf2_msgs/FrameGraphResponse';
[data.frame_yaml, info.frame_yaml] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'tf2_msgs/FrameGraphResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'frame_yaml';
