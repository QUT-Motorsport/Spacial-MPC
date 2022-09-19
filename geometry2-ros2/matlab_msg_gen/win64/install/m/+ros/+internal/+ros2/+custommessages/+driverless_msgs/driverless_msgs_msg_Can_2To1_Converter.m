function ros1msg = driverless_msgs_msg_Can_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_Can_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Timestamp = message.timestamp;
ros1msg.Id = message.id;
ros1msg.IdType = message.id_type;
ros1msg.Dlc = message.dlc;
end