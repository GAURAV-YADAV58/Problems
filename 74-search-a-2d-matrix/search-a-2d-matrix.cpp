class Solution {
public:
    bool searchRow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();

        int st = 0, end = n - 1;
        while(st <= end){
            int mid = st + (end - st) / 2;
            if(target == matrix[row][mid]){
                return true;
            }else if(target < matrix[row][mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int sRow = 0, eRow = n - 1;
        while(sRow <= eRow){
            int midRow = sRow + (eRow - sRow) / 2;
            if(target >= matrix[midRow][0] && target <= matrix[midRow][m - 1]){
                return searchRow(matrix, target, midRow);
            }else if(target > matrix[midRow][m - 1]){
                sRow = midRow + 1;
            }else{
                eRow = midRow - 1;
            }
        }
        return false;
    }
};