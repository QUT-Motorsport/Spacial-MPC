function ros2msg = driverless_msgs_msg_RES_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_RES_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.sw_k2 = message.SwK2;
ros2msg.bt_k3 = message.BtK3;
ros2msg.estop = message.Estop;
ros2msg.loss_of_signal_shutdown_notice = message.LossOfSignalShutdownNotice;
ros2msg.radio_quality = message.RadioQuality;
end