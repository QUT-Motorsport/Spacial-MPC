function ros2msg = tf2_msgs_msg_TFMessage_1To2_Converter(message,ros2msg)
%tf2_msgs_msg_TFMessage_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.transforms.header.stamp.sec = message.Transforms.Header.Stamp.Sec;
ros2msg.transforms.header.stamp.nanosec = message.Transforms.Header.Stamp.Nsec;
ros2msg.transforms.header.frame_id = message.Transforms.Header.FrameId;
ros2msg.transforms.child_frame_id = message.Transforms.ChildFrameId;
ros2msg.transforms.transform.translation.x = message.Transforms.Transform.Translation.X;
ros2msg.transforms.transform.translation.y = message.Transforms.Transform.Translation.Y;
ros2msg.transforms.transform.translation.z = message.Transforms.Transform.Translation.Z;
ros2msg.transforms.transform.rotation.x = message.Transforms.Transform.Rotation.X;
ros2msg.transforms.transform.rotation.y = message.Transforms.Transform.Rotation.Y;
ros2msg.transforms.transform.rotation.z = message.Transforms.Transform.Rotation.Z;
ros2msg.transforms.transform.rotation.w = message.Transforms.Transform.Rotation.W;
end