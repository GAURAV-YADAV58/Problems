class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int n = nums.size();
        if(n == 1){
            return nums.at(0);
        }
        while(st <= end){
            int mid  = st + (end - st) / 2;
            if(mid == 0 && nums.at(mid) != nums.at(mid+1)){
                return nums.at(mid);
            }
            if(mid == nums.size()-1 && nums.at(mid) != nums.at(mid-1)){
                return nums.at(mid);
            }
            if(nums.at(mid) != nums.at(mid+1) && nums.at(mid) != nums.at(mid-1)){
                return nums.at(mid);
            }
            if(mid % 2 == 0){
                if(nums.at(mid) == nums.at(mid -1)){
                    end = mid - 1;
                }else{
                    st = mid + 1;
                }
            }else{
                if(nums.at(mid) == nums.at(mid -1)){
                    st = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};