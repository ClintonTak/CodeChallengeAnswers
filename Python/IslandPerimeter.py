'''
This one was a lot of fun to work on and posed an interesting problem. I had to use pen and paper to quickly jot 
down the different cases. From Leetcode: 

You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, 
and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes" (water 
inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is
rectangular, width and height don't exceed 100. Determine the perimeter of the island.'''



class Solution:
    def islandPerimeter(grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        [[0,1,0,0],
         [1,1,1,0],
         [0,1,0,0],
         [1,1,0,0]] = 16
        """
        count = 0
        noIslandFlag = 1
        oneBlockFlag = 0 
        for i in range(0, len(grid)):
            for j in range(0, len(grid[i])): 
                points = 4 #if the block is alone then it is worth 4 points 
                if grid[i][j] == 1: 
                    if (j>0):
                        if (grid[i][j-1] == 1): #check left one cell 
                            points-=1
                    if (j<len(grid[i])):
                        if (grid[i][j+1] == 1): #check right one cell
                            points-=1
                    if (i > 0):
                        if (grid[i-1][j] == 1): #check below one cell 
                            points-=1
                    if (i<3):
                        if (grid[i+1][j] == 1): #check above one cell
                            points-=1
                    count += points
                    
        return count

print(Solution.islandPerimeter([[1,1,0,0],
                                [0,1,0,0],
                                [0,0,0,0],
                                [0,0,0,0]] ))

'''
[0,1,0,0],
[1,1,1,0],
[0,1,0,0],
[1,1,0,0]]

[0,1,0,0],
[0,0,0,0],
[0,0,0,0],
[0,0,0,0]]'''