class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = INT_MIN;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums.at(i) == 1){
                count++;
            }else{
                maxOnes = max(maxOnes, count);
                count = 0;
            }
            if(i == nums.size()-1){
                maxOnes = max(maxOnes,count);
            }
        }
        return maxOnes;
    }
};