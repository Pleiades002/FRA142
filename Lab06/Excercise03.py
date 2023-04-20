import sys
import pygame as pg
import webbrowser
from Class.Button import Button


class InputBox:

    def __init__(self, x, y, w, h, text=''):
        self.rect = pg.Rect(x, y, w, h)
        self.color = COLOR_INACTIVE
        self.text = text
        self.txt_surface = FONT.render(text, True, self.color)
        self.active = False

    def handle_event(self, event):

        if event.type == pg.MOUSEBUTTONDOWN:  # ทำการเช็คว่ามีการคลิก Mouse หรือไม่
            # ทำการเช็คว่าตำแหน่งของ Mouse อยู่บน InputBox นี้หรือไม่
            if self.rect.collidepoint(event.pos):
                # Toggle the active variable.
                self.active = not self.active
            else:
                self.active = False
            self.color = COLOR_ACTIVE if self.active else COLOR_INACTIVE  # เปลี่ยนสีของ InputBox

        if event.type == pg.KEYDOWN:
            if self.active:
                if self == input_box3:
                    if event.unicode.isnumeric():
                        self.text += event.unicode
                elif event.key == pg.K_RETURN:
                    print(self.text)
                    self.text = ''
                elif event.key == pg.K_BACKSPACE:
                    self.text = self.text[:-1]
                else:
                    self.text += event.unicode
                # Re-render the text.
                self.txt_surface = FONT.render(self.text, True, 'black')

    def update(self):
        # Resize the box if the text is too long.
        width = max(200, self.txt_surface.get_width()+10)
        self.rect.w = width

    def draw(self, Screen):
        # Blit the text.
        Screen.blit(self.txt_surface, (self.rect.x+5, self.rect.y+5))
        # Blit the rect.
        pg.draw.rect(Screen, self.color, self.rect, 2)


pg.init()
screen_width, screen_heigh = 500, 750
submit_width, submit_heigh = 300, 300
screen = pg.display.set_mode((screen_width, screen_heigh))

COLOR_INACTIVE = pg.Color('lightskyblue3')
COLOR_ACTIVE = pg.Color('dodgerblue2')     # ^^^
fontSize = 32
FONT = pg.font.Font(None, fontSize)
# (text,is smooth?,letter color,background color)

input_box1 = InputBox(150, 100, 300, fontSize)  # สร้าง InputBox1
input_box2 = InputBox(150, 200, 500, fontSize)  # สร้าง InputBox2
input_box3 = InputBox(150, 300, 140, fontSize)
guide0 = FONT.render('Register', True, 'black', (255, 255, 255))
disGuide0 = guide0.get_rect()  # text size
disGuide0.center = (250, 25+(fontSize/2))

guide1 = FONT.render('Firstname: ', True, 'black', (255, 255, 255))
disGuide1 = guide1.get_rect()  # text size
disGuide1.center = (150, 100-(fontSize/2))

guide2 = FONT.render('Lastname: ', True, 'black', (255, 255, 255))
disGuide2 = guide2.get_rect()  # text size
disGuide2.center = (150, 200-(fontSize/2))

guide3 = FONT.render('Age: ', True, 'black', (255, 255, 255))
disGuide3 = guide3.get_rect()  # text size
disGuide3.center = (150, 300-(fontSize/2))

UnSubmit = Button(0, 0, 10, 10)
submit = Button((screen_width/2) - (submit_width/2),
                (screen_heigh/3) + (submit_heigh/2), submit_width, submit_heigh)
input_boxes = [input_box1, input_box2, input_box3]
isRun = True
failSafe = False
flag = False


while (isRun):
    screen.fill((255, 255, 255))
    screen.blit(guide0, disGuide0)
    screen.blit(guide1, disGuide1)
    screen.blit(guide2, disGuide2)
    screen.blit(guide3, disGuide3)
    firstName = input_box1.text
    lastName = input_box2.text
    age = input_box3.text
    text = FONT.render('Hello {} {}! You are {} years old.'.format(
        firstName, lastName, age), True, 'black', (0, 255, 0))
    textRect = text.get_rect()  # text size
    textRect.center = ((screen_width/2), (screen_heigh/3) + submit_heigh)

    UnSubmit.draw(screen)
    submit.draw(screen)

    if submit.isMouseOn():
        submit.color = pg.Color(255, 255, 0)
        if submit.isMouseOnHold() and not failSafe:
            failSafe = True
            submit.color = pg.Color(255, 0, 0)
            webbrowser.open(r"https://www.youtube.com/watch?v=dQw4w9WgXcQ")
    else:
        failSafe = False
        submit.color = pg.Color(0, 255, 0)

    if UnSubmit.isMouseOn():
        UnSubmit.color = pg.Color(255, 0, 0)
        if UnSubmit.isMouseOnHold():
            flag = True
    else:
        UnSubmit.color = pg.Color(255, 255, 255)
    if flag:
        screen.blit(text, textRect)
    for box in input_boxes:  # ทำการเรียก InputBox ทุกๆตัว โดยการ Loop เข้าไปยัง list ที่เราเก็บค่า InputBox ไว้
        box.update()  # เรียกใช้ฟังก์ชัน update() ของ InputBox
        # เรียกใช้ฟังก์ชัน draw() ของ InputBox เพื่อทำการสร้างรูปบน Screen
        box.draw(screen)

    for event in pg.event.get():
        for box in input_boxes:
            box.handle_event(event)
        if event.type == pg.QUIT:
            pg.quit()
            run = False

    pg.display.update()
