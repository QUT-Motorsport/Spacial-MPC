function ros1msg = tf2_msgs_msg_TFMessage_2To1_Converter(message,ros1msg)
%tf2_msgs_msg_TFMessage_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Transforms.Header.Stamp.Sec = message.transforms.header.stamp.sec;
ros1msg.Transforms.Header.Stamp.Nsec = message.transforms.header.stamp.nanosec;
ros1msg.Transforms.Header.FrameId = message.transforms.header.frame_id{1};
ros1msg.Transforms.ChildFrameId = message.transforms.child_frame_id{1};
ros1msg.Transforms.Transform.Translation.X = message.transforms.transform.translation.x;
ros1msg.Transforms.Transform.Translation.Y = message.transforms.transform.translation.y;
ros1msg.Transforms.Transform.Translation.Z = message.transforms.transform.translation.z;
ros1msg.Transforms.Transform.Rotation.X = message.transforms.transform.rotation.x;
ros1msg.Transforms.Transform.Rotation.Y = message.transforms.transform.rotation.y;
ros1msg.Transforms.Transform.Rotation.Z = message.transforms.transform.rotation.z;
ros1msg.Transforms.Transform.Rotation.W = message.transforms.transform.rotation.w;
end