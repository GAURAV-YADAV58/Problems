class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while(i + 1 < n && nums[i] < nums[i + 1]){
            i++;
        }
        if(i == 0){
            return false;
        }
        int peak1 = i;

        while(i + 1 < n && nums[i] > nums[i + 1]){
            i++;
        }
        if(i == peak1){
            return false;
        }
        int valley = i;

        while(i + 1 < n && nums[i] < nums[i + 1]){
            i++;
        }
        if(i == valley){
            return false;
        }
        return i == n - 1;
    }
};