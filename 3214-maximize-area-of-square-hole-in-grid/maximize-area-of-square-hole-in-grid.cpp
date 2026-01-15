class Solution {
public:
    int longestSeq(vector<int>& arr){
        sort(arr.begin(), arr.end());
        int maxLen = 1, current = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i-1] + 1){
                current++;
                maxLen = max(maxLen, current);
            }else{
                current = 1;
            }
        }
        return maxLen + 1;
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int hor = longestSeq(hBars);
        int vert = longestSeq(vBars);
        int side = min(hor, vert);
        return side * side;
    }
};