function ros1msg = driverless_msgs_msg_RES_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_RES_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.SwK2 = message.sw_k2;
ros1msg.BtK3 = message.bt_k3;
ros1msg.Estop = message.estop;
ros1msg.LossOfSignalShutdownNotice = message.loss_of_signal_shutdown_notice;
ros1msg.RadioQuality = message.radio_quality;
end