import pygame as pg

pg.init()
screen_width, screen_height = 800, 400
screen = pg.display.set_mode((screen_width, screen_height))
_radius = 0
rate = 10
flag = True
r = 0
g = 0
b = 0
while True:
    screen.fill((255, 255, 255))
    pg.draw.circle(screen, (r, g, b), (screen_width//2, screen_height//2), _radius)

    if flag:
        r = 0
        g = 255
        _radius += rate
        if _radius >= max(screen_width, screen_height):
            flag = False
    else:
        g = 0
        r = 255
        _radius -= rate
        if _radius <= 0:
            flag = True

    pg.time.delay(5)
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
