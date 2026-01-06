class Solution {
public:
    bool isPrime(int a){
        if(a <= 1){
            return false;
        }
        for(int i = 2; i*i <= a; i++){
            if(a % i == 0){
                return false;
            }
        }
        return true;
    }
    int countSet(int a){
        int count = 0;
        while(a){
            a &= (a-1);
            count++;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++){
            int setCount = countSet(i);
            if(isPrime(setCount)){
                ans++;
            }
        }
        return ans;
    }
};