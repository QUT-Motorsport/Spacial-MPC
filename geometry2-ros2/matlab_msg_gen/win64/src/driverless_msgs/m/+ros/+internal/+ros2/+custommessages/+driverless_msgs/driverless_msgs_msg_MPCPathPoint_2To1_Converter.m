function ros1msg = driverless_msgs_msg_MPCPathPoint_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_MPCPathPoint_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Location.X = message.location.x;
ros1msg.Location.Y = message.location.y;
ros1msg.Location.Z = message.location.z;
ros1msg.TrackAngle = message.track_angle;
ros1msg.Curvature = message.curvature;
ros1msg.S = message.s;
end