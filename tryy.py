# import pygame
# import math
# import heapq
# import random

# # Set up the Pygame window
# pygame.init()
# screen_width = 640
# screen_height = 480
# screen = pygame.display.set_mode((screen_width, screen_height))
# pygame.display.set_caption("Self-Driving Car")

# # Define colors
# WHITE = (255, 255, 255)
# BLACK = (0, 0, 0)
# RED = (255, 0, 0)
# GREEN = (0, 255, 0)
# BLUE = (0, 0, 255)
# GRAY = (100, 100, 100)

# # Define constants
# CAR_WIDTH = 20
# CAR_LENGTH = 30
# CAR_SPEED = 5
# RADAR_RANGE = 100
# RADAR_ANGLE = math.pi / 4
# POPULATION_SIZE = 10
# MUTATION_RATE = 0.1

# # Define the city layout
# city_layout = set([(100, 100), (200, 100), (300, 100), (400, 100), (500, 100),
#                    (100, 200), (200, 200), (300, 200), (400, 200), (500, 200),
#                    (100, 300), (200, 300), (300, 300), (400, 300), (500, 300)])

# # Define the starting and ending positions
# start_x = 50
# start_y = 50
# end_x = 590
# end_y = 430

# # Define the radar sensor rays
# radar_rays = []
# for angle in range(-90, 91, 10):
#     radar_rays.append(math.radians(angle))

# # Define the car class


# class Car:
#     def __init__(self, x, y, color):
#         self.x = x
#         self.y = y
#         self.color = color
#         self.angle = 0
#         self.speed = 0
#         self.crashed = False
#         self.radar_distances = []

#     def move(self, direction):
#         if direction == "forward":
#             self.speed = CAR_SPEED
#         elif direction == "backward":
#             self.speed = -CAR_SPEED
#         else:
#             self.speed = 0
#         self.x += math.sin(self.angle) * self.speed
#         self.y -= math.cos(self.angle) * self.speed

#     def turn(self, direction):
#         if direction == "left":
#             self.angle += math.pi / 12
#         elif direction == "right":
#             self.angle -= math.pi / 12

#     def draw(self):
#         car_rect = pygame.Rect(0, 0, CAR_LENGTH, CAR_WIDTH)
#         car_rect.center = (self.x, self.y)
#         car_surf = pygame.Surface((CAR_LENGTH, CAR_WIDTH))
#         car_surf.fill(self.color)
#         rotated_car_surf = pygame.transform.rotate(
#             car_surf, math.degrees(-self.angle))
#         screen.blit(rotated_car_surf, rotated_car_surf.get_rect(
#             center=car_rect.center))

#     def detect_obstacles(self):
#         self.radar_distances = []
#         for ray in radar_rays:
#             min_distance = RADAR_RANGE
#             for distance in range(1, RADAR_RANGE + 1):
#                 ray_x = int(self.x + math.sin(self.angle + ray) * distance)
#                 ray_y = int(self.y - math.cos(self.angle + ray) * distance)
#                 if (ray_x, ray_y) in city_layout:
#                     min_distance = distance
#                     break
#             self.radar_distances.append(min_distance)

#             # If there is an obstacle in front of the car, slow down
#             if self.radar_distances[0] < 50:
#                 self.speed = CAR_SPEED / 2

#             # Choose an action based on the radar readings
#             if self.radar_distances[0] > 50:
#                 # If there's no obstacle in front, go forward
#                 self.move("forward")
#             elif self.radar_distances[1] > 50:
#                 # If there's an obstacle to the left, turn right
#                 self.turn("right")
#             elif self.radar_distances[-1] > 50:
#                 # If there's an obstacle to the right, turn left
#                 self.turn("left")
#             else:
#                 # If there's no way forward, turn around
#                 self.turn("left")
#                 self.turn("left")

#             # If the car hits an obstacle, mark it as crashed
#             if (int(self.x), int(self.y)) in city_layout:
#                 self.crashed = True

#             # If the car goes out of bounds, mark it as crashed
#             if self.x < 0 or self.x > screen_width or self.y < 0 or self.y > screen_height:
#                 self.crashed = True

#             # If the car reaches the destination, mark it as successful
#             if math.sqrt((self.x - end_x)**2 + (self.y - end_y)**2) < 30:
#                 self.successful = True


str1='No one is perfect'
str2='Never ever give up'
str3='Choose to be optimistic'
str4='Think positive'
str5=''
for c in str1: 
    if c in str2: 
        str3+=c
        
for k in str3: 
    if k in str4: 
        str5=str3+k
        
