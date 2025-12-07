class Solution {
public:
    int countOdds(int low, int high) {
        int elements = high-low+1;
        if(elements & 1){
            if((low&1) && (high&1)){
                return (elements/2)+1;
            }else{
                return (elements/2);
            }
        }else{
            return elements/2;
        }
    }
};