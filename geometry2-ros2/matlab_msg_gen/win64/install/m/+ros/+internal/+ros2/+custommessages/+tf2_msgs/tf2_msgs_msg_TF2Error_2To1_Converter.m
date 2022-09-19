function ros1msg = tf2_msgs_msg_TF2Error_2To1_Converter(message,ros1msg)
%tf2_msgs_msg_TF2Error_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Error = message.error;
ros1msg.ErrorString = message.error_string{1};
end