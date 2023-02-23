#!/usr/bin/python3

"""
Evaluates perimeter of a given grid
"""


def island_perimeter(grid):
    """
    Returns perimeter of grid
    args:
        grid (list<int>): array of lists 
            0 - water zone
            1 - land zone
            cell - sqare 1x1  
    """
    if not isinstance(grid, list):
        return 0
    
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0
    if h <= 100 and w <= 100:
        for i in range(h):
            for j in range(w):
                if grid[i][j] == 1:
                    s += 1
                    if (j > 0 and grid[i][j - 1] == 1):
                        e += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        e += 1
    return s * 4 - e * 2