function ros1msg = driverless_msgs_msg_Reset_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_Reset_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Reset = message.reset;
end