function ros1msg = driverless_msgs_msg_TrackDetectionStamped_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_TrackDetectionStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Cones.Cone.Location.X = message.cones.cone.location.x;
ros1msg.Cones.Cone.Location.Y = message.cones.cone.location.y;
ros1msg.Cones.Cone.Location.Z = message.cones.cone.location.z;
ros1msg.Cones.Cone.Color = message.cones.cone.color;
ros1msg.Cones.Covariance = message.cones.covariance;
end