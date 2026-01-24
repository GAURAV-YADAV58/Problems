class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st = 0,end = nums.size() - 1;
        int ans = INT_MIN;
        while(st < end){
            int curr = nums[st++] + nums[end--];
            ans = max(ans, curr);
        }
        return ans;
    }
};