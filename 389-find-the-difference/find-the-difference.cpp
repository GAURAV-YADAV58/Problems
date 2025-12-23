class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> c;
        for(char i : s){
            c[i]--;
        }
        for(char i : t){
            c[i]++;
        }
        for(auto &p : c){
            if(p.second == 1){
                return p.first;
            }
        }
        return ' ';
    }
};