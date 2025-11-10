class Solution {
public:
    int minimumOneBitOperations(int n) {
        int ans = n;
        while( n > 0){
            n = n >> 1;
            ans ^= n;
        }
        return ans;
    }
};