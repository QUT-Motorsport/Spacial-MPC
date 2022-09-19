function ros2msg = driverless_msgs_msg_ConeDetectionStamped_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_ConeDetectionStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.cones.location.x = message.Cones.Location.X;
ros2msg.cones.location.y = message.Cones.Location.Y;
ros2msg.cones.location.z = message.Cones.Location.Z;
ros2msg.cones.color = message.Cones.Color;
ros2msg.cones_with_cov.cone.location.x = message.ConesWithCov.Cone.Location.X;
ros2msg.cones_with_cov.cone.location.y = message.ConesWithCov.Cone.Location.Y;
ros2msg.cones_with_cov.cone.location.z = message.ConesWithCov.Cone.Location.Z;
ros2msg.cones_with_cov.cone.color = message.ConesWithCov.Cone.Color;
ros2msg.cones_with_cov.covariance = message.ConesWithCov.Covariance;
end