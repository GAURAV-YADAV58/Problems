class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for(int n : nums){
            total+=n;
        }
        int need = total % p;
        if(need == 0){
            return 0;
        } 
        unordered_map<int,int> map;
        map[0] = -1;
        long long prefix = 0;
        int ans = nums.size();
        for(int i = 0; i < nums.size(); i++){
            prefix = (prefix + nums.at(i)) % p;
            int target = (prefix - need + p) % p;
            if(map.count(target)){
                ans = min(ans, i-map[target]);
            }
            map[prefix] = i;
        }
        return ans==nums.size()? -1 : ans;
    }
};