import pygame

pygame.init()

white = (255, 255, 255)
black = (0, 0, 0)

WIDTH = 1920
HEIGHT = 1080

x_start, y_start = 0, 0

x_separator = 10
y_separator = 20

rows = HEIGHT // y_separator
columns = WIDTH // x_separator
screen_size = rows * columns
x_offset = columns / 2
y_offset = rows / 2

A, B = 0, 0 # rotating animation

theta_spacing = 10
phi_spacing = 10

chars = ".,-~:;=!*#$@"


screen = pygame.display.set_mode((WIDTH, HEIGHT))

display_surface = pygame.display.setmode((WIDTH, HEIGHT))
# display_surface = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption('Donut')
font = pygame.font.SysFont('Arial', 18, bold=True)


def text_display(letter, x_start, y_start)

run = True