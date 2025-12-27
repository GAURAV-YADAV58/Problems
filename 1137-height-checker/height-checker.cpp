class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        int max = INT_MIN;
        for(int i : heights){
            if(i > max){
                max = i;
            }
        }
        vector<int> count(max+1, 0);
        vector<int> B(heights.size(),0);
        for(int i = 0; i < heights.size(); i++){
            count[heights[i]]++;
        }
        for(int i = 1; i <= max; i++){
            count[i] += count[i-1];
        }
        for(int i = heights.size()-1; i >=0; i--){
            B[--count[heights[i]]] = heights[i];
        }
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != B[i]){
                ans++;
            }
        }
        return ans;
    }
};