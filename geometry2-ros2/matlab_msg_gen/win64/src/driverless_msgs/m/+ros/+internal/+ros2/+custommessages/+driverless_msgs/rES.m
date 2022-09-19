function [data, info] = rES
%RES gives an empty data for driverless_msgs/RES
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'driverless_msgs/RES';
[data.sw_k2, info.sw_k2] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.bt_k3, info.bt_k3] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.estop, info.estop] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.loss_of_signal_shutdown_notice, info.loss_of_signal_shutdown_notice] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.radio_quality, info.radio_quality] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'driverless_msgs/RES';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'sw_k2';
info.MatPath{2} = 'bt_k3';
info.MatPath{3} = 'estop';
info.MatPath{4} = 'loss_of_signal_shutdown_notice';
info.MatPath{5} = 'radio_quality';
