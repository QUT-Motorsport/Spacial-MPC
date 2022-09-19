function ros2msg = driverless_msgs_msg_ConeWithCovariance_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_ConeWithCovariance_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.cone.location.x = message.Cone.Location.X;
ros2msg.cone.location.y = message.Cone.Location.Y;
ros2msg.cone.location.z = message.Cone.Location.Z;
ros2msg.cone.color = message.Cone.Color;
ros2msg.covariance = message.Covariance;
end