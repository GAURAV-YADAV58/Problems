class Solution {
public:
    void getSubsets(vector<int>& nums,vector<int>& ans, int i, vector<vector<int>>& subsets){
        int n = nums.size();
        if(i == nums.size()){
            subsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubsets(nums, ans, i + 1, subsets);
        ans.pop_back();
        int idx = i + 1;
        while(idx < n && nums[idx] == nums[idx - 1]){
            idx++;
        }
        getSubsets(nums,ans, idx, subsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subsets;
        vector<int> ans;
        getSubsets(nums, ans, 0, subsets);
        return subsets;
    }
};