function ros2msg = ackermann_msgs_msg_AckermannDrive_1To2_Converter(message,ros2msg)
%ackermann_msgs_msg_AckermannDrive_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.steering_angle = message.SteeringAngle;
ros2msg.steering_angle_velocity = message.SteeringAngleVelocity;
ros2msg.speed = message.Speed;
ros2msg.acceleration = message.Acceleration;
ros2msg.jerk = message.Jerk;
end