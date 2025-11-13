class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int st = 0;
        int end = nums.size()-1;
        while(st <= end){
            int mid = st + (end - st) / 2;
            if(nums.at(mid) == tar){
                return mid;
            }
            if(nums.at(st) <= nums.at(mid)){
                if(nums.at(st) <= tar && nums.at(mid) >= tar){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                if(nums.at(mid) <= nums.at(end)){
                    if(nums.at(mid) <= tar && nums.at(end) >= tar){
                        st = mid+1;
                    }else{
                        end = mid-1;
                    }
                }
            }

        }
        return -1;
    }
};