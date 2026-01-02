class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> map;
        int ans = -1;
        for(int i : nums){
            map[i]++;
        }
        for(auto p : map){
            if(p.second == nums.size()/2){
                ans = p.first;
            }
        }
        return ans;
    }
};