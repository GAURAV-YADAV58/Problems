class Solution {
public:
    int minOperations(vector<int>& nums) {
        int countOp = 0;
        if(nums.size() == 1){
            return 0;
        }
        for(int i = 0; i < nums.size()-1; i++){
            if(nums.at(i) >= nums.at(i+1)){
                countOp += nums.at(i) - nums.at(i+1) + 1;
                nums.at(i+1) = nums.at(i)+1;
            }
        }
        return countOp;
    }
};