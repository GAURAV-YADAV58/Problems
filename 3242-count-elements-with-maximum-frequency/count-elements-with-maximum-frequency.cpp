class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mfreq = INT_MIN;
        int count = 0;
        for(int i : nums){
            mp[i]++;
        }

        for(auto &p : mp){
            mfreq = max(mfreq, p.second);
        }

        for(auto &c : mp){
            if(c.second == mfreq){
                count += c.second;
            }
        }
        return count;
    }
};