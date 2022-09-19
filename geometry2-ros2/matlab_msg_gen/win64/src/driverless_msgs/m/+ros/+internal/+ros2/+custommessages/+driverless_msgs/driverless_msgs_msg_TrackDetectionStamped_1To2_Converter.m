function ros2msg = driverless_msgs_msg_TrackDetectionStamped_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_TrackDetectionStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.cones.cone.location.x = message.Cones.Cone.Location.X;
ros2msg.cones.cone.location.y = message.Cones.Cone.Location.Y;
ros2msg.cones.cone.location.z = message.Cones.Cone.Location.Z;
ros2msg.cones.cone.color = message.Cones.Cone.Color;
ros2msg.cones.covariance = message.Cones.Covariance;
end