import pygame as pg
import numpy as np

# initialize pygame
pg.init()

# init display
screen_width, screen_height = 1000, 500
screen2 = pg.display.set_mode((screen_width, screen_height))
screen = pg.display.set_mode((screen_width, screen_height))

# user input
init_x = 50
y_offset = 50
init_y = screen_height - y_offset
init_u = 1.5
init_deg = 30

# default variable
radius = 5
tick = 2
gravity = 1
pixScale = 1  # Default 2 cm/px
time = 0
flag = False
pos_x = init_x
pos_y = init_y
rad = np.deg2rad(init_deg)
cir_ux = np.cos(rad)*init_u
cir_uy = np.sin(rad)*init_u
init_time = pg.time.get_ticks()
trajectoryPath = list()


screen.fill((255, 255, 255))
pg.draw.circle(screen, (255, 0, 0), (init_x, init_y), radius)
while True:
    """ Use projectile formular
        Sx = s_x0 + u_xT
        Sy = s_y0 + u_yT + 0.5gt^2
        given;
            s_x0 = init_x
            u_x  = np.cos(rad)*init_u
            s_y0 = screen_height - y_offset
            u_y  = np.sin(rad)*init_u
            g    = 1 pixel/s^2
            t    = time, increase overtime
    """

    if pg.time.get_ticks() - init_time >= tick:
        init_time = pg.time.get_ticks()
        screen.fill((255, 255, 255))

        time += tick/1000
        if len(trajectoryPath) != 0:
            for i in trajectoryPath:
                pg.draw.circle(screen, (0, 255, 0), ((round(i[0]*pixScale)), (round(i[1]*pixScale))), 1)

        pos_x += cir_ux*time
        pos_y -= (cir_uy*time) - (0.5*gravity*(time**2))

        trajectoryPath.append([pos_x, pos_y])
        pg.draw.circle(screen, (255, 0, 0), ((round(pos_x*pixScale)),(round(pos_y*pixScale))), radius * pixScale)
        pg.draw.line(screen, (0, 255, 0), (init_x * pixScale, init_y * pixScale),(screen_width, init_y * pixScale)) # X-Axis Datum
        pg.draw.line(screen, (0, 255, 0), (init_x * pixScale, init_y * pixScale), (init_x * pixScale, 0)) # Y-Axis Datum
        
        pg.display.update()
        print(pos_y)
        if (pos_x * pixScale) + (radius * pixScale) >= screen_width - (radius * pixScale):
            pixScale = pixScale * 0.75
        if (pos_y * pixScale) - (radius * pixScale) <= 0 + (radius * pixScale):
            pixScale = pixScale * 0.75
        if pos_y >= init_y:
            while True:
                for event in pg.event.get():
                    if event.type == pg.QUIT:
                        pg.quit()
                        exit()

        # if flag is not True and pos_y != init_y:
        #     flag = True
        #     print("Shoot")

    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
