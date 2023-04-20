import pygame as pg
from Class.Rectangle import Rectangle


class Button(Rectangle):
    def __init__(self, x=0, y=0, w=0, h=0, color=pg.Color(255, 0, 0)):
        """
        Args:
            x (int, optional): _Top left corner of Rectangle on X_. Defaults to 0.
            y (int, optional): _Top left Corner of Rectangle on Y_. Defaults to 0.
            w (int, optional): _Rectangle width_. Defaults to 0.
            h (int, optional): _Rectangle heigh_. Defaults to 0.
            color (_type_, optional): _Default color_. Defaults to pg.Color(255, 0, 0).
        """
        Rectangle.__init__(self, x, y, w, h, color)

    def isMouseOn(self):
        currX, currY = pg.mouse.get_pos()
        if currX in range(int(self.x), int(self.x + self.w)) and currY in range(int(self.y), int(self.y + self.h)):
            return True
        else:
            return False

    def isMouseOnHold(self):
        """
        pg.mouse.get_pressed() return as list
        Ex.
            pg.mouse.get_pressed()[0] ==> First Data inside list
        """
        if pg.mouse.get_pressed()[0]:
            return True
        else:
            return False
