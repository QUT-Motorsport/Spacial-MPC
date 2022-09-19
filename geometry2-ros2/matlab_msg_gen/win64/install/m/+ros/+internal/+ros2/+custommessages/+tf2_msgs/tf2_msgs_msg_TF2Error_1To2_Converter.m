function ros2msg = tf2_msgs_msg_TF2Error_1To2_Converter(message,ros2msg)
%tf2_msgs_msg_TF2Error_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.error = message.Error;
ros2msg.error_string = message.ErrorString;
end