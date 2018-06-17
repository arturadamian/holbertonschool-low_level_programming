#!/usr/bin/python3
"""find a perimeter of an island"""


def cell_perim(i, j, grid):
    """return perimeter of cell"""
    count = 4
    if i > 0 and grid[i - 1][j] == 1:
        count -= 2
    if j > 0 and grid[i][j - 1] == 1:
        count -= 2
    return count


def island_perimeter(grid):
    """returns the perimeter of the island"""
    perim = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                perim += cell_perim(i, j, grid)
    return perim
