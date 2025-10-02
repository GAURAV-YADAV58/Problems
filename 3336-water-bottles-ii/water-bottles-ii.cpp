class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
         int d = numBottles;
         int e = numBottles;
         while(e >= numExchange){
            e -= numExchange;
            d++;
            e++;
            numExchange++;
         }
         return d;
    }
};