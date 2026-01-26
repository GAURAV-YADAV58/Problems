class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        vector<vector<int>> ans;
        for(int i = 0; i < n - 1; i++){
            int diff = abs(arr[i] - arr[i + 1]);
            minDiff = min(minDiff, diff); 
        }
        for(int i = 0; i < n - 1; i++){
            int diff = abs(arr[i] - arr[i + 1]);
            if(diff == minDiff){
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;

    }
};