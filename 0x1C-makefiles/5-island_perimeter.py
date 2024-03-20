#!/usr/bin/python3
"""
 Module contains the function island_perimeter 
"""


def island_perimeter(grid):
    """
	Returns the perimeter of island described in grid 
	Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
	"""
    perimeter = 0

    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for row in range(nrows):
        for col in range(ncolumns):
            if grid[row][col] == 1:
                if (row - 1) == -1 or grid[row - 1][col] == 0:
                    perimeter += 1
                if (row + 1) == nrows or grid[row + 1][col] == 0:
                    perimeter += 1
                if (col - 1) == -1 or grid[row][col - 1] == 0:
                    perimeter += 1
                if (col + 1) == ncolumns or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
