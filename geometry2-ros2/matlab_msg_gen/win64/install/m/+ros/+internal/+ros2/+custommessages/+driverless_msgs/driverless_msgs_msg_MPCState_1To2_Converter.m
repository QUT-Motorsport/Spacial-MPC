function ros2msg = driverless_msgs_msg_MPCState_1To2_Converter(message,ros2msg)
%driverless_msgs_msg_MPCState_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.s = message.S;
ros2msg.ey = message.Ey;
ros2msg.etheta = message.Etheta;
ros2msg.otheta_dot = message.OthetaDot;
ros2msg.vx = message.Vx;
ros2msg.vy = message.Vy;
ros2msg.d = message.D;
ros2msg.t.sec = message.T.Sec;
ros2msg.t.nanosec = message.T.Nsec;
end