class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = i+1;
        while(i < nums.size()-1 && j < nums.size()){
            if(nums.at(i) == 0 && nums.at(j) != 0){
                swap(nums.at(i),nums.at(j));
                i++;
                j++;          
            }else if(nums.at(i) == 0 && nums.at(j) == 0){
                j++;
            }else{
                i++;
                j++;
            }
        }
    }
};