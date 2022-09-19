function ros2msg = driverless_msgs_msg_MPCCenterline_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_MPCCenterline_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.path.location.x = message.Path.Location.X;
ros2msg.path.location.y = message.Path.Location.Y;
ros2msg.path.location.z = message.Path.Location.Z;
ros2msg.path.track_angle = message.Path.TrackAngle;
ros2msg.path.curvature = message.Path.Curvature;
ros2msg.path.s = message.Path.S;
end