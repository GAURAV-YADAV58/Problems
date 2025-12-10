class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        long long ans = 1;
        int mod = 1000000007;
        for(int i = 1; i < complexity.size(); i++){
            if(complexity.at(i) <= complexity.at(0)){
                return 0;
            }
        }
        for(int i = 1; i < complexity.size(); i++){
            ans = (ans * i) % mod;
        }
        return ans;
    }
};