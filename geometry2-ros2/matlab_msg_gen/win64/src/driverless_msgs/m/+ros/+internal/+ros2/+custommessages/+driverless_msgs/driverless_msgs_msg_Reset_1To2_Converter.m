function ros2msg = driverless_msgs_msg_Reset_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_Reset_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.reset = message.Reset;
end