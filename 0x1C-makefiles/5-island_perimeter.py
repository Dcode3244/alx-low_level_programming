#!/usr/bin/python3

"""
defines a function that return the perimeter of the island
described in grid

"""


def island_perimeter(grid):
    """ returns the perimeter of the island grid """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i][j + 1] != 1:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[i][j - 1] != 1:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[i - 1][j] != 1:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[i + 1][j] != 1:
                        count += 1
                except IndexError:
                    count += 1
    return count
