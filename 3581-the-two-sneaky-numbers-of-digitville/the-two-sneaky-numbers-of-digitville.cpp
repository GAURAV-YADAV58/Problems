class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> sneak;
        vector<int> ans;
        for(int n : nums){
            sneak[n]++;
            if(sneak[n] == 2){
                ans.push_back(n);
            }
        }
        return ans;
    }
};