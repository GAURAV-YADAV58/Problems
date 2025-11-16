class Solution {
public:
    int numSub(string s) {
        long long one = 0;
        long long ans = 0;
        long long mod = 1000000007;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                one++;
            }else{
                ans += ((one)*(one+1))/2;
                one = 0; 
            }
        }
        ans += ((one)*(one+1))/2;
        return ans%mod;
    }
};