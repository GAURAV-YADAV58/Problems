class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(!isalpha(s[i]) || islower(s[i])){
                continue;
            }
            s[i] = s[i] + 32;
        }
        return s;
    }
};