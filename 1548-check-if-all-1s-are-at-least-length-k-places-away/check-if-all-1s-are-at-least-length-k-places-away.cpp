class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int idx1 = -1;
        int idx2 =-1;
        int dist = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums.at(i) == 1){
                idx2 = idx1;
                idx1 = i;
                dist = abs(idx2 - idx1);
            }
            if(idx2 != -1 && dist <= k){
                return false;
            }
        }
        return true;
    }
};