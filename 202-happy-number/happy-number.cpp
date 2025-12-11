class Solution {
public:
    int squareSum(int n){
        int sum = 0;
        while(n > 0){
            int rem = n % 10;
            sum += rem * rem;
            n/= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n != 1){
            if(s.count(n)){
                return false;
            }
            s.insert(n);
            n = squareSum(n);
        }
        return true;
    }
};