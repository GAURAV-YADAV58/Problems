class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        int ans1 = 0, ans2 = 0;
        for(int i : nums1){
            if(s2.find(i) != s2.end()){
                ans1++;
            }
        }
        for(int j : nums2){
            if(s1.find(j) != s1.end()){
                ans2++;
            }
        }
        return {ans1, ans2};
    }
};