class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(int i : candyType){
            st.insert(i);
        }
        int eat = candyType.size()/2;
        int count = 0;
        for(auto &p : st){
            count++;
            if(count == eat){
                return count;
            }
        }
        return count;
    }
};