#!/usr/bin/python3

"""
defines a function that return the perimeter of the island
described in grid

"""


def island_perimeter(grid):
    """ returns the perimeter of the island grid """
    count = 0
    cell = 0
    border = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                cell += 1
                if i > 0 and grid[i - 1][j] == 1:
                    border += 1
                if j > 0 and grid[i][j - 1] == 1:
                    border += 1
    return cell * 4 - (border * 2)
