class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0; 
        int l = 0;
        int r = height.size() - 1;
        while(l < r){
            int width = r - l;
            int h = min(height.at(l), height.at(r));
            int area = width * h;
            maxWater = max(maxWater, area);
            height.at(l) < height.at(r) ? l++ : r--;
        }
        return maxWater;
    }
};