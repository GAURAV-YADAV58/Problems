class Solution {
public:
    bool isSelfDividing(int num){
        if(num < 10){
            return true;
        }else{
            int i = num;
            while(i){
                int rem = i % 10;
                if(rem != 0){
                    if(num % rem != 0){
                        return false;
                    }
                }else{
                    return false;
                }
                i /= 10;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfDivide;
        for(int i = left; i <= right; i++){
            if(isSelfDividing(i)){
                selfDivide.push_back(i);
            }
        }
        return selfDivide;
        
    }
};