class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long place = 1;
        while(n > 0){
            if((n % 10) != 0){
                ans += (n % 10) * place;
                place *= 10;
            }
            n /= 10;
        }
        return ans;
    }
};