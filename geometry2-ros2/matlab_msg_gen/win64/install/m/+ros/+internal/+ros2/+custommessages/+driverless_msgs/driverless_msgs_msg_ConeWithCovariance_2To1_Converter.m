function ros1msg = driverless_msgs_msg_ConeWithCovariance_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_ConeWithCovariance_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Cone.Location.X = message.cone.location.x;
ros1msg.Cone.Location.Y = message.cone.location.y;
ros1msg.Cone.Location.Z = message.cone.location.z;
ros1msg.Cone.Color = message.cone.color;
ros1msg.Covariance = message.covariance;
end