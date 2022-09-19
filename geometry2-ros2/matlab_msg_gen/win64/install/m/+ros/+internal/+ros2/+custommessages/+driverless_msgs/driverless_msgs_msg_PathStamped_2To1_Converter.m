function ros1msg = driverless_msgs_msg_PathStamped_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_PathStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Path.Location.X = message.path.location.x;
ros1msg.Path.Location.Y = message.path.location.y;
ros1msg.Path.Location.Z = message.path.location.z;
ros1msg.Path.TurnIntensity = message.path.turn_intensity;
end