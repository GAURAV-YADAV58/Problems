class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> sString;
        unordered_map<char,int> tString;
        for(int i : s){
            sString[i]++;
        }
        for(int i : t){
            tString[i]++;
        }
        return sString == tString;
    }
};