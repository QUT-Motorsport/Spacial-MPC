function [i, s] = track_msg_loc(track_msg, sTarget, iInit)
    % funtion searches the track_msg to fine the entry for a given s value,
    % starting from an initial index    
    
    % initial values and direction to search
    i = iInit;
    s = track_msg.path(i).s;
    d = 1;
    if sTarget < s
        d = -1;
    end

    % search linearly - can't be bothered doing a binary search
    while d * sTarget > d * s
        i = i + d;

        % break if array runs out
        if i < 1
            i = 1;
            break
        end
        if i > length(track_msg.path)
            i = length(track_msg.path);
            break
        end
        s = track_msg.path(i).s;
    end
    
    s = track_msg.path(i).s;
end