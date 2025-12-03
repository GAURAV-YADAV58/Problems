class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ele;
        for(int i = 0; i < nums.size(); i++){
            ele[nums.at(i)]++;
            if(ele[nums.at(i)] > 1){
                return true;
            }
        }
        return false;

    }
};