class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> newNums;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = 0; j < nums.size() - 1; j++){
                nums.at(j) = (nums.at(j) + nums.at(j+1)) % 10;
            }
        }
        return nums.at(0);
    }
};