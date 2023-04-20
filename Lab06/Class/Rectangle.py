import pygame as pg


class Rectangle:
    def __init__(self, x=0, y=0, w=0, h=0, color=pg.Color(255,0,0)):
        self.x = x  # Position X
        self.y = y  # Position Y
        self.w = w  # Width
        self.h = h  # Height
        self.color = color # Colour
        
    def draw(self, screen):
        pg.draw.rect(screen, self.color, (self.x, self.y, self.w, self.h))
