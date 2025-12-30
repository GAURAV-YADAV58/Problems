class Solution {
public:
    bool isMagic(vector<vector<int>> &grid, int r, int c){
        if(grid[r+1][c+1] != 5){
            return false;
        }
        vector<bool> seen(10,false);
        for(int i = r; i < r + 3; i++){
            for(int j = c; j < c + 3; j++){
                int val = grid[i][j];
                if(val < 1 || val > 9 || seen[val]){
                    return false;
                }
                seen[val] = true;
            }
        }
        for(int i = 0; i < 3; i++){
            int rowSum = 0, colSum = 0;
            for(int j = 0; j < 3; j++){
                rowSum += grid[r+i][c+j];
                colSum += grid[r+j][c+i];
            }
            if(rowSum != 15 || colSum != 15){
                return false;
            }
        }
        int diag1 = grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2];
        int diag2 = grid[r][c+2] + grid[r+1][c+1] + grid[r+2][c];
        if(diag1 != 15 || diag2 != 15){
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        for(int i = 0; i <= n-3; i++){
            for(int j = 0; j <= m-3; j++){
                if(isMagic(grid, i , j)){
                    count++;
                }
            }
        }
        return count;
    }
};