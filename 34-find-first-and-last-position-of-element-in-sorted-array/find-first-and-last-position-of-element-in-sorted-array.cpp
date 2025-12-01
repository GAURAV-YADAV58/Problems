class Solution {
public:
    int firstPosition(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int ans = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            if (nums[mid] == target) ans = mid;
        }
        return ans;
    }

    int lastPosition(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int ans = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            if (nums[mid] == target) ans = mid;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return { firstPosition(nums, target), lastPosition(nums, target) };
    }
};
