class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int currMin = 0;
        int currMax = 0;
        for(int num : nums){
             currMax = max(num, currMax + num);
             maxSum = max(maxSum, currMax);
             currMin = min(num, currMin + num);
             minSum = min(minSum, currMin);
        }
        return max(abs(minSum), maxSum);
    }
};