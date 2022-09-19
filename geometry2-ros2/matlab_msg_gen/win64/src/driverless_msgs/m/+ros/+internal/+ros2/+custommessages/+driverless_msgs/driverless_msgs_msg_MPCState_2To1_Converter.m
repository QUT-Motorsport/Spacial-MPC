function ros1msg = driverless_msgs_msg_MPCState_2To1_Converter(message,ros1msg)
%driverless_msgs_msg_MPCState_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.S = message.s;
ros1msg.Ey = message.ey;
ros1msg.Etheta = message.etheta;
ros1msg.OthetaDot = message.otheta_dot;
ros1msg.Vx = message.vx;
ros1msg.Vy = message.vy;
ros1msg.D = message.d;
ros1msg.T.Sec = message.t.sec;
ros1msg.T.Nsec = message.t.nanosec;
end