function ros1msg = driverless_msgs_msg_ConeDetectionStamped_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_ConeDetectionStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Cones.Location.X = message.cones.location.x;
ros1msg.Cones.Location.Y = message.cones.location.y;
ros1msg.Cones.Location.Z = message.cones.location.z;
ros1msg.Cones.Color = message.cones.color;
ros1msg.ConesWithCov.Cone.Location.X = message.cones_with_cov.cone.location.x;
ros1msg.ConesWithCov.Cone.Location.Y = message.cones_with_cov.cone.location.y;
ros1msg.ConesWithCov.Cone.Location.Z = message.cones_with_cov.cone.location.z;
ros1msg.ConesWithCov.Cone.Color = message.cones_with_cov.cone.color;
ros1msg.ConesWithCov.Covariance = message.cones_with_cov.covariance;
end