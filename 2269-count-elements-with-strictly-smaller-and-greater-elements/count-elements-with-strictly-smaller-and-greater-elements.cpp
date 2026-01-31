class Solution {
public:
    int countElements(vector<int>& nums) {
        int minEle = INT_MAX;
        int maxEle = INT_MIN;
        int count = 0;
        for(int i : nums){
            minEle = min(minEle, i);
            maxEle = max(maxEle, i);
        }
        for(int i : nums){
            if(i != minEle && i != maxEle){
                count++;
            }
        }
        return count;
    }
};