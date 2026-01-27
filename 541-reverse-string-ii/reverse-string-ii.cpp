class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int st = 0;
        while(st < n){
            int end = min(st + k, n);
            reverse(s.begin() + st,s.begin() + end);
            st += 2 * k;
        }
        return s;
    }
};