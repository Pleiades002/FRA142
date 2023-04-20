import sys
import pygame as pg
from Class.Button import Button

pg.init()
screen_width, screen_heigh = 800, 400
button_width, butten_heigh = 100, 100
buttonX, buttonY = (screen_width/2) - (button_width/2), (screen_heigh/2) - (butten_heigh/2)
screen = pg.display.set_mode((screen_width, screen_heigh))
isRun = True
btn = Button(buttonX, buttonY, 100, 100)

while (isRun):
    screen.fill((255, 255, 255))
    if btn.isMouseOn():
        btn.w = 300
        btn.h = 300
    else:
        btn.w = 100
        btn.h = 100

    btn.draw(screen)
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            isRun = False
