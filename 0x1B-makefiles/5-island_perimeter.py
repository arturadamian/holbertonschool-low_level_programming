#!/usr/bin/python3
"""find a perimeter of an island"""


def cell_perim(i, j, grid):
    """return perimeter of cell"""
    count = 4
    if grid[i][j + 1] == 1:
        count -= 1
    if grid[i][j - 1] == 1:
        count -= 1
    if grid[i + 1][j] == 1:
        count -= 1
    if grid[i - 1][j] == 1:
        count -= 1
    return count


def island_perimeter(grid):
    """returns the perimeter of the island"""
    perim = 0
    if grid:
        if len(grid) > 2:
            for i in range(1, (len(grid) - 1)):
                if len(grid[i]) > 2:
                    for j in range(1, (len(grid[0]) - 1)):
                        if grid[i][j] == 1:
                            perim += cell_perim(i, j, grid)
    return perim
