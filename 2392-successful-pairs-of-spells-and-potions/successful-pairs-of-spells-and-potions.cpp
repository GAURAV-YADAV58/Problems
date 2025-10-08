class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int n : spells){
            int high = potions.size() - 1;
            int low = 0;
            int c = potions.size();
            while(low <= high){
                int mid = low + (high - low)/2;
                if((long long)potions.at(mid) * n >= success){
                    c  = mid;
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            ans.push_back(potions.size() - c);
        }
        return ans;
    }
};