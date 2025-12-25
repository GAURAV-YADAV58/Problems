class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long ans = 0;
        long long count = 0;
        for(int i = 0; i < k; i++){
            if(happiness.at(i)-count < 0){
                break;
            }
            ans += (happiness.at(i)-count);
            count++;
        }
        return ans;
    }
};