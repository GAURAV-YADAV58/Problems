class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        if(n == 1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i + k - 1 < n; i++){
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};