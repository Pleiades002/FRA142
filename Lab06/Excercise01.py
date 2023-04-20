import sys
import pygame as pg
from Class.Button import Button

pg.init()
screen_width, screen_heigh = 800, 400
button_width, butten_heigh = 100, 100
screen = pg.display.set_mode((screen_width, screen_heigh))
isRun = True
btn = Button((screen_width/2) - (button_width/2),
             (screen_heigh/2) - (butten_heigh/2), button_width, butten_heigh)

while (isRun):
    screen.fill((255, 255, 255))
    if btn.isMouseOn():
        btn.color = pg.Color(105, 105, 105)
        if btn.isMouseOnHold():
            btn.color = pg.Color(128, 0, 128)
    else:
        btn.color = pg.Color(255, 0, 0)

    btn.draw(screen)
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            isRun = False
