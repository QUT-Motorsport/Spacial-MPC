function plt_bike(X, debug, track, c, ros)
    %% parameters
    m = 220; % mass
    I = 78.8; % Z axis moment of initia
    Wheelbase = 1.53;
    lf = Wheelbase*0.45; % dist from COG to front wheel
    lr = Wheelbase*0.55; % dist from COG to rear wheel
    cb = 21934*2; % force vs slip angle for typers in linear region N/rad

    %% states
    if ros
        ey = X.ey;
        theta = X.etheta;
        theta_dot = X.otheta_dot;
        Vx = X.vx; % car forward velocity
        Vy = X.vy; % car left velocity
        delta = X.d; % steeting angle
        t = X.t; % time
    else
        ey = X(1);
        theta = X(2);
        theta_dot = X(3);
        Vx = X(4); % car forward velocity
        Vy = X(5); % car left velocity
        delta = X(6); % steeting angle
        t = X(7); % time
    end

    %% more parameters
    if ros
        track_angle = track.track_angle;
        track_X = track.location.x;
        track_Y = track.location.y;
        X = track_X - ey*sin(track_angle);
        Y = track_Y + ey*cos(track_angle);
    else
        track_angle = track(5);
        track_X = track(2);
        track_Y = track(3);
        X = track_X - ey*sin(track_angle);
        Y = track_Y + ey*cos(track_angle);
    end

    Ot = theta+track_angle;

    COG_size = Wheelbase*0.05;

    %% super awsome function that i stole from https://stackoverflow.com/questions/25729784/how-to-draw-an-arrow-in-matlab
    drawArrow = @(a,b,c,w) quiver(a(1),a(2),b(1)-a(1),b(2)-a(2),0, c, 'LineWidth', w);
    
    %% plotting

    %% rect
    w = 0.6;
    h = 0.2;
    rect_vecs = [-Wheelbase*w Wheelbase*w Wheelbase*w -Wheelbase*w;
                 Wheelbase*h Wheelbase*h -Wheelbase*h -Wheelbase*h];
    for i = 1:4
        rect_vecs(:, i) = [cos(Ot), -sin(Ot);
                           sin(Ot), cos(Ot)]*rect_vecs(:, i) + [X, Y]';
    end
    patch(rect_vecs(1, :),rect_vecs(2, :), 'white', 'FaceAlpha', 0, 'EdgeColor', c)

%     % wheels
%     w = 0.1;
%     h = 0.05;
%     rect_vecs = [-Wheelbase*w Wheelbase*w Wheelbase*w -Wheelbase*w;
%                  Wheelbase*h Wheelbase*h -Wheelbase*h -Wheelbase*h];
%     
%     front = [X+cos(Ot)*lf, Y+sin(Ot)*lf]';
%     rear = [X+cos(Ot)*-lr, Y+sin(Ot)*-lr]';
%     
%     front_vecs = zeros(2, 4);
%     rear_vecs = zeros(2, 4);
%     for i = 1:4
%        front_vecs(:, i) = [cos(Ot+delta), -sin(Ot+delta);
%                            sin(Ot+delta), cos(Ot+delta)]*rect_vecs(:, i) + front;
%        rear_vecs(:, i) = [cos(Ot), -sin(Ot);
%                           sin(Ot), cos(Ot)]*rect_vecs(:, i) + rear;
%     end
% 
%     patch(front_vecs(1, :),front_vecs(2, :), 'white')
%     patch(rear_vecs(1, :),rear_vecs(2, :), 'white')
%     drawArrow(rear, front, '-k', 0.2)
%     rectangle('Position',[front(1)-COG_size/2 front(2)-COG_size/2 COG_size COG_size],'Curvature',1, 'FaceColor', 'k')
%     rectangle('Position',[rear(1)-COG_size/2 rear(2)-COG_size/2 COG_size COG_size],'Curvature',1, 'FaceColor', 'k')
% 
%     % cog
%     rectangle('Position',[X-COG_size/2 Y-COG_size/2 COG_size COG_size],'Curvature',1, 'FaceColor', 'k')
% 
%     % v
% %     drawArrow([X, Y], [X-sin(Ot)*Vy, Y+cos(Ot)*Vy], '-b', 2)
% %     drawArrow([X, Y], [X+cos(Ot)*Vx, Y+sin(Ot)*Vx], '-b', 2)
% %     drawArrow([X, Y], [X-sin(Ot)*Vy+cos(Ot)*Vx, Y+cos(Ot)*Vy+sin(Ot)*Vx], '-r', 2)
% 
%     % tyre forces
%     scale = 40;
%     ff = -debug(1)/scale;
%     fr = -debug(2)/scale;
%     drawArrow(rear, [rear(1)-sin(Ot)*fr, rear(2)+cos(Ot)*fr], '-g', 1)
%     drawArrow(front, [front(1)-sin(Ot+delta)*fr, front(2)+cos(Ot+delta)*fr], '-g', 1)
end


