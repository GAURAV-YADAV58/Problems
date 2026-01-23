class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int stRow = 0, eRow = m - 1, stCol = 0, eCol = n - 1;
        vector<int> ans;
        while(stRow <= eRow && stCol <= eCol){
            for(int j = stCol; j <= eCol; j++){
                ans.push_back(matrix[stRow][j]);
            }
            for(int i = stRow + 1; i <= eRow; i++){
                ans.push_back(matrix[i][eCol]);
            }
            for(int j = eCol - 1; j >= stCol; j--){
                if(stRow == eRow){
                    break;
                }
                ans.push_back(matrix[eRow][j]);
            }
            for(int i = eRow - 1; i > stRow; i--){
                if(stCol == eCol){
                    break;
                }
                ans.push_back(matrix[i][stCol]);
            }
            stRow++;
            eRow--;
            stCol++;
            eCol--;
        }
        return ans;
    }
};