class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(i > 0 && nums.at(i) == nums.at(i-1)){
                continue;
            }
            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums.at(i) + nums.at(left) + nums.at(right);
                if(sum > 0){
                    right--;
                }else if(sum < 0){
                    left++;
                }else{
                    result.push_back({nums.at(i),nums.at(left), nums.at(right)});

                    while(left < right && nums.at(left) == nums.at(left+1)){
                        left++;
                    }
                    while(left < right && nums.at(right) == nums.at(right-1)){
                        right--;
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};