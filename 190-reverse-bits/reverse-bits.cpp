class Solution {
public:
    uint32_t reverseBits(int n) {
        uint32_t ans = 0;
        for(int i = 1; i <= 32; i++){
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }
        return ans;
    }
};