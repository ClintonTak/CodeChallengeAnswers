
//Incomplete!

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
                    }if (row<rowLen){//check below
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