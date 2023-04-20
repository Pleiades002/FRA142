import sys
import pygame as pg
from Class.Rectangle import Rectangle

pg.init()
screen_width, screen_heigh = 1000, 500
box_width, box_heigh = 100, 100
screen = pg.display.set_mode((screen_width, screen_heigh))
isRun = True
isKeyW = False
isKeyA = False
isKeyS = False
isKeyD = False
step = 2
box = Rectangle((screen_width/2) - (box_width/2),
                (screen_heigh/2) - (box_heigh/2), box_width, box_heigh)


while (isRun):
    screen.fill((255, 255, 255))
    box.draw(screen)
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()

        if event.type == pg.KEYDOWN and event.key == pg.K_w:  # ปุ่มถูกกดลงและเป็นปุ่ม W
            # print("Key W down")
            isKeyW = True
        if event.type == pg.KEYUP and event.key == pg.K_w:  # ปุ่มถูกปล่อยและเป็นปุ่ม W
            # print("Key W up")
            isKeyW = False

        if event.type == pg.KEYDOWN and event.key == pg.K_a:  # ปุ่มถูกกดลงและเป็นปุ่ม A
            # print("Key A down")
            isKeyA = True
        if event.type == pg.KEYUP and event.key == pg.K_a:  # ปุ่มถูกปล่อยและเป็นปุ่ม A
            # print("Key A up")
            isKeyA = False

        if event.type == pg.KEYDOWN and event.key == pg.K_s:  # ปุ่มถูกกดลงและเป็นปุ่ม S
            # print("Key S down")
            isKeyS = True
        if event.type == pg.KEYUP and event.key == pg.K_s:  # ปุ่มถูกปล่อยและเป็นปุ่ม S
            # print("Key S up")
            isKeyS = False

        if event.type == pg.KEYDOWN and event.key == pg.K_d:  # ปุ่มถูกกดลงและเป็นปุ่ม D
            # print("Key D down")
            isKeyD = True
        if event.type == pg.KEYUP and event.key == pg.K_d:  # ปุ่มถูกปล่อยและเป็นปุ่ม D
            # print("Key D up")
            isKeyD = False

    if box.y > 0:
        if isKeyW:
            box.y -= step
    if box.x > 0:
        if isKeyA:
            box.x -= step
    if box.y + box_heigh < screen_heigh:
        if isKeyS:
            box.y += step
    if box.x + box_width < screen_width:
        if isKeyD:
            box.x += step
