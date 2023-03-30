#!/usr/bin/python3


def island_perimeter(grid):
    """
    This function calculated the perimeter
    of a grid
    """
    pm = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                pm += 1
    pm *= 2
    return (pm)
