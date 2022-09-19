function ros1msg = ackermann_msgs_msg_AckermannDrive_2To1_Converter(message,ros1msg)
%ackermann_msgs_msg_AckermannDrive_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.SteeringAngle = message.steering_angle;
ros1msg.SteeringAngleVelocity = message.steering_angle_velocity;
ros1msg.Speed = message.speed;
ros1msg.Acceleration = message.acceleration;
ros1msg.Jerk = message.jerk;
end