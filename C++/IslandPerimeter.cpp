/*This one was a lot of fun to work on and posed an interesting problem. I had to use pen and paper to quickly jot 
down the different cases. From Leetcode: 

You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, 
and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes" (water 
inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is
 rectangular, width and height don't exceed 100. Determine the perimeter of the island.
*/


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0; 
        if (grid.empty()){
            return count; 
        }
        int rowLen = 4;//(int)grid.size();
        int columnLen = 4;//(int)grid[0].size();
        for (int row = 0; row < rowLen; row ++){
            for (int col = 0; col < columnLen; col ++){
                if (grid[row][col] == 1){
                    int points = 4;//if grid is all alone the answer is 4
                    if (col > 0){
                        if (grid[row][col-1] == 1){//check left
                            points-=1; 
                        }     
                    }if (col<columnLen){//check right
                        if (grid[row][col+1] ==1){
                            points -=1; 
                        }
                    }if (row>0){//check above 
                        if (grid[row-1][col] == 1){
                            points -=1;
                        } 
                    }if (row<rowLen-1){//check below
                        if (grid[row+1][col]==1){
                            points -=1; 
                        }
                    }
                    count += points;
                }
            }
        }
        return count; 
    }
};