import pygame as pg

pg.init()   
screen_width, screen_height = 800, 480  # 1 ขนาดหน้าจอ
screen = pg.display.set_mode((screen_width, screen_height))  # 1 สร้างหน้าต่างเกม
posX, posY = 0, 0


while True:
    screen.fill((255, 255, 255))
    pg.draw.circle(screen, (255, 0, 0), (posX, posY), 100)
    posX += 1
    posY += 1
    if posX > screen_width:
        posX = 0
    if posY > screen_height:
        posY = 0
    pg.time.delay(1)
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
