function [status,statusText] = configureWSL2(ipAddress, username, password)
% CONFIGUREWSL2 - Configure WSL2 environment to enable communication with ROS in MATLAB/Simulink
%   Note: 
%   Before running this function, you must install ROS Noetic and Gazebo on
%   WSL2, VcXsrc on Windows.
%   This function has been verified with ROS Noetic on Ubuntu20.04 in WSL2.
%   You may need to modify some fields based on your setup.
%
%   [STATUS,STATUSTEXT] = configureWSL2(IPADDRESS, USERNAME, PASSWORD) 
%   automatically configures WSL2 by setting the required environment 
%   variables to enable ROS communication between WSL2 and MATLAB/Simulink.
%   It also enables X server support so that you can port Gazebo and Rviz 
%   display to Windows if you have them installed. It returns STATUS and
%   STATUSTEXT to indicate whether the configuration was completed
%   successfully. If the configuration setup is successful, STATUS is 0. 
%   Otherwise, STATUS is -1.

%   Copyright 2021 The MathWorks, Inc.

    % Change ROSPath to your actual installed ROS path if it is not in 
    % /opt/ros/noetic/setup.bash 
    ROSPath = '/opt/ros/noetic/setup.bash';
    

    % Create rosdevice representing WSL2
    d = rosdevice(ipAddress, username, password);

    % Check if ROS Noetic has been installed on WSL2
    try
        % Look up specific ROS installation on WSL2
        system(d,['[ -f "',ROSPath,'" ]']);
    catch
        status = -1;
        statusText = "ROS Noetic has not been installed properly on WSL2. Follow http://wiki.ros.org/noetic/Installation/Ubuntu to install ROS Noetic.";
        if nargout<2
            fprintf(strcat(statusText,"\n"));
        end
        return;
    end

    % Source ROS on WSL2 ~/.bashrc
    % Source ROS only if it does not exist in ~/.bashrc
    if isequal(length(system(d,['echo $(grep ',ROSPath,' ~/.bashrc)'])),1)
        system(d,['echo "source ',ROSPath, '" >> ~/.bashrc']);
    end

    % ROS_IP may change everytime restarting WSL2
    % The following command set the ROS_IP to IP address on your WSL2. If
    % it failed for some reason, consider replacing "%(hostname -I)" by the
    % IP address you provided as input to this function.
    if isequal(length(system(d,'echo $(grep ''ROS_IP'' ~/.bashrc)')),1)
        % No ROS_IP has been specified in ~/.bashrc
        system(d,'echo "export ROS_IP=$(hostname -I | tr -d [:blank:])" >> ~/.bashrc');
    else
        % Replace old ROS_IP with new IP address.
        system(d,'sed -i "s/ROS_IP=.*/ROS_IP=$(hostname -I | tr -d [:blank:])/" ~/.bashrc');
    end

    % Set ROS_IP on windows MATLAB
    [status,allIPs] = system('ipconfig');
    if isequal(status,0)
        if contains(allIPs,'(WSL)')
            validIP = ros.internal.Net.getAssociatedInterfaceAddress(ipAddress);

            setenv('ROS_IP',validIP);
        else
            status = -1;
            statusText = "No IP address found for WSL/WSL2.";
            if nargout<2
                fprintf(strcat(statusText,"\n"));
            end
            return;
        end
    else
        status = -1;
        statusText = "Error getting IP information with 'ipconfig' from local machine. Please try to manually get IP addresses on your local machine.";
        if nargout<2
            fprintf(strcat(statusText,"\n"));
        end
        return;
    end


    % Set up X11 display
    % This assumes you have X11 tunneling software installed on your
    % Windows machine. If you haven't installed, consider download and
    % install VcXsrc from this link: https://sourceforge.net/projects/vcxsrv/
    if isequal(length(system(d,'echo $(grep ''DISPLAY='' ~/.bashrc)')),1)
        system(d,'echo "export DISPLAY=$(awk ''/nameserver / {print $2; exit}'' /etc/resolv.conf 2>/dev/null):0" >> ~/.bashrc');
    end

    if isequal(length(system(d,'echo $(grep ''LIBGL_ALWAYS_INDIRECT='' ~/.bashrc)')),1)
        system(d,'echo "export LIBGL_ALWAYS_INDIRECT=0" >> ~/.bashrc');
    end

    if isequal(length(system(d,'echo $(grep ''GAZEBO_IP='' ~/.bashrc)')),1)
        system(d,'echo "export GAZEBO_IP=172.0.0.1" >> ~/.bashrc');
    end

    % Completed all configuration setup.
    status = 0;
    statusText = "Successfully configured WSL2 and MATLAB!";
    if nargout<2
        fprintf(strcat(statusText,"\n"));
    end
end