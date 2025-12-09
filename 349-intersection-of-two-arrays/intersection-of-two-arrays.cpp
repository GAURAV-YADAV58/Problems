class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_map<int,int> map;
        vector<int> res;
        for(int i : nums1){
            map[i]++;
        }
        for(int i : nums2){
            if(map.count(i)){
                st.insert(i);
            }
        }
        for(auto &p : st){
            res.push_back(p);
        }
        return res;
    }
};