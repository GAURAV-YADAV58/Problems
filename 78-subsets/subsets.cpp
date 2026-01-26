class Solution {
public:
    void getallSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets){
        if(i == nums.size()){
            subsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getallSubsets(nums,ans,i+1,subsets);
        ans.pop_back();
        getallSubsets(nums,ans,i+1,subsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> subsets;
        getallSubsets(nums,ans,0,subsets);
        return subsets;
    }
};