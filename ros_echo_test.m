machine_ip = '192.168.68.117';
setenv('ROS_IP',machine_ip);

node = ros2node("/matlab")
sub = ros2subscriber(node, 'mpc/states', 'Reliability','besteffort')
while 1 == 1
    msg = receive(sub, 100);
    disp("###########################")
    disp(msg)
%     for i = 1:10
%         disp("---------------------")
%         disp(msg.path(i).location)
%         disp(msg.path(i).s)
%         disp(msg.path(i).curvature)
%     end
end