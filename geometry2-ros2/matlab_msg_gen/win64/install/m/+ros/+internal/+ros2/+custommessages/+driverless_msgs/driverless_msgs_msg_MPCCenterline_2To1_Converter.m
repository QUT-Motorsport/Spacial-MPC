function ros1msg = driverless_msgs_msg_MPCCenterline_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_MPCCenterline_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Path.Location.X = message.path.location.x;
ros1msg.Path.Location.Y = message.path.location.y;
ros1msg.Path.Location.Z = message.path.location.z;
ros1msg.Path.TrackAngle = message.path.track_angle;
ros1msg.Path.Curvature = message.path.curvature;
ros1msg.Path.S = message.path.s;
end