class Solution {
    public int sumFourDivisors(int[] nums) {
        int sum = 0;    
        for(int i : nums){
            int count = 0;
            int s = 0;
            for(int j = 1; j*j <= i; j++){
                if(i%j == 0){
                    int d = i / j;
                    if(j != d){
                        count +=2;
                        s += j + d;
                    }else{
                        count++;
                        s += d;
                    }
                }
            }
            if(count == 4){
                sum += s;
            }
        }           
        return sum;
    }
}