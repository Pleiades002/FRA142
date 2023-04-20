import pygame as pg
import numpy as np

# initialize pygame
pg.init()

# init display
screen_width, screen_height = 1000, 500
screen = pg.display.set_mode((screen_width, screen_height))

# user input
init_x = 50
y_offset = 50
init_y = screen_height - y_offset
init_u = 1
init_deg = 45

# default variable
radius = 15
tick = 2
gravity = 1
time = 0
pos_x = init_x
pos_y = init_y
rad = np.deg2rad(init_deg)
cir_ux = np.cos(rad)*init_u
cir_uy = np.sin(rad)*init_u
init_time = pg.time.get_ticks()


screen.fill((255, 255, 255))
pg.draw.circle(screen, (255, 0, 0), (pos_x, pos_y), radius)
pg.draw.line(screen, (0, 255, 0), (pos_x, pos_y),
             (screen_width, screen_height))
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
        pos_x += cir_ux*time
        pos_y -= (cir_uy*time) - (0.5*gravity*(time**2))

        pg.draw.circle(screen, (255, 0, 0), (pos_x, pos_y), radius)
        pg.display.update()

    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
