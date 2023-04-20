import pygame as pg

""" ไม่ควรใช้ _ ก่อนหน้าตัวแปรหรือ Function เพราะ Python จะนับเป็นการประกาศแบบ Piority
"""
pg.init()
screen_width, screen_height = 800, 480
screen = pg.display.set_mode((screen_width, screen_height))
pos_x, pos_y = screen_width // 2, 30
_radius = 20
init_u = 0
accel = 1
_time = 0
tick = 1
prev_dis = 0
init_time = pg.time.get_ticks()

screen.fill((255, 255, 255))
pg.draw.circle(screen, (255, 0, 0), (pos_x, pos_y), _radius)
while True:
    """ Use SUVAT formular
        s = ut + 0.5at^2
        v = u + at
        Given:
            s = start pos_y
            u = init_u
            v = increase init_u
            t = increase overtime
            a = 1 pixel/s^2
    """
    if pg.time.get_ticks() - init_time >= tick:
        init_time = pg.time.get_ticks()
        screen.fill((255, 255, 255))

        _time += tick/1000
        displace = (init_u*_time) + (0.5 * accel * (_time**2))
        pos_y += displace - prev_dis
        prev_dis = displace
        pg.draw.circle(screen, (255, 0, 0), (pos_x, pos_y), _radius)
        pg.display.update()
        if pos_y+_radius >= screen_height:
            pg.quit()
            exit()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
