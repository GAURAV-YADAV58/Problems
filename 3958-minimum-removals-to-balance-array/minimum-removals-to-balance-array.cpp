class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int len = 0;
        for(int j = 0; j < n; j++){
            while((long)nums[j] > (long)nums[i] * k){
                i++;
            }
            len = max(len, j - i + 1);
        }
        return n - len;
    }
};