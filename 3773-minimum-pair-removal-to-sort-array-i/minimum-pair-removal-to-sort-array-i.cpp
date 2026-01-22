class Solution {
public:
    bool isSorted(vector<int>& nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while(!isSorted(nums)){
            int minSum = INT_MAX;
            int j = -1;
            for(int i = 0; i < nums.size() - 1; i++){
                if(minSum > nums[i] + nums[i + 1]){
                    minSum = nums[i] + nums[i+1];
                    j = i;
                }
            }
            nums.erase(nums.begin() + j, nums.begin() + j + 2);
            nums.insert(nums.begin() + j, minSum);
            count++;
        }
        return count;
    }
};