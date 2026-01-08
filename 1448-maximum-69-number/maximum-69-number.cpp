class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        int pos = -1;
        int p = 0;
        while(temp > 0){
            if(temp % 10 == 6){
                pos = p;
            }
            p++;
            temp /= 10;
        }
        num += 3 * pow(10, pos);
        return num;
    }
};