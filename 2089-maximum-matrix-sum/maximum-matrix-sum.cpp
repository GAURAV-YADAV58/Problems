class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        long long countNegative = 0;
        long long minAbsolute = INT_MAX;
        for(auto &i : matrix){
            for(int j : i){
                if(j < 0){
                    countNegative++;
                }
                totalSum += abs(j);
                minAbsolute = min(minAbsolute, (long long) abs(j));
            }
        }
        if(countNegative % 2 == 0){
            return totalSum;
        }
        return totalSum - 2 * minAbsolute;
    }
};