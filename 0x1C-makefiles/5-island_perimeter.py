#!/usr/bin/python3
"""Task 5 of ALX Project(C - Makefiles)

Technical interview preparation: Write the specified function"""


def island_perimeter(grid):
    """Return the perimeter of the island represented in the grid.

    0 represent water and 1 represents land.

    Args:
        grid (list of list of ints): a representation of an area.

    """
    landCells = 0
    for horizontal in grid:
        landHere = 0
        for digit in horizontal:
            if digit == 1:
                landHere += 1
        if landHere == 0 and landCells > 0:
            break
        landCells += landHere

    if landCells <= 0:
        return 0
    return (landCells + 1) * 2
