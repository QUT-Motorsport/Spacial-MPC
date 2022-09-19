function ros2msg = driverless_msgs_msg_PathStamped_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_PathStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.path.location.x = message.Path.Location.X;
ros2msg.path.location.y = message.Path.Location.Y;
ros2msg.path.location.z = message.Path.Location.Z;
ros2msg.path.turn_intensity = message.Path.TurnIntensity;
end