class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& p : mp){
            if(p.second > nums.size()/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};