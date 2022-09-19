function ros2msg = driverless_msgs_msg_Can_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_Can_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.timestamp = message.Timestamp;
ros2msg.id = message.Id;
ros2msg.id_type = message.IdType;
ros2msg.dlc = message.Dlc;
end