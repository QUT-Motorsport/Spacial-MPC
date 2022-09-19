function ros2msg = driverless_msgs_msg_MPCPathPoint_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_MPCPathPoint_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.location.x = message.Location.X;
ros2msg.location.y = message.Location.Y;
ros2msg.location.z = message.Location.Z;
ros2msg.track_angle = message.TrackAngle;
ros2msg.curvature = message.Curvature;
ros2msg.s = message.S;
end