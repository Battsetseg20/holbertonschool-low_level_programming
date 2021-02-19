#!/usr/bin/python3
"""Module contains the function island_perimeter"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid:
    - grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    """
    land = 0
    water = 0
    grid_y = len(grid)
    grid_x = len(grid[0])
    # print("Grid y:{} and x:{}".format(grid_y, grid_x))
    for y in range(grid_y):
        for x in range(grid_x):
            if grid[y][x] == 1:
                land += 1
                # only count if it has any right water or down water
                if (y > 0 and grid[y - 1][x] == 1):
                    water += 1
                if (x > 0 and grid[y][x - 1] == 1):
                    water += 1
    # every adjacent lands made two sides disappeared.
    return land * 4 - water * 2
