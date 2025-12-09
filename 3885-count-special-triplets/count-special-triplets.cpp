class Solution {
public:
    long long specialTriplets(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        unordered_map<long long, long long> right, left;
        int n = nums.size();

        for (long long v : nums) {
            right[v]++;
        }

        long long ans = 0;
        for (int j = 0; j < n; ++j) {
            long long mid = nums[j];
            // remove current from right (we are at j now)
            right[mid]--;
        
            long long need = mid * 2;  // potential nums[i] and nums[k]
            long long cntLeft = left[need];
            long long cntRight = right[need];
        
            ans = (ans + cntLeft * cntRight) % MOD;

            // now add current to left for future j
            left[mid]++;
        }
        return (int)ans;
    }
};