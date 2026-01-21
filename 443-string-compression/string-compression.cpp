class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i = 0; i < n; i++){
            char ch = chars[i];
            int count = 0;
            while(i < n && chars[i] == ch){
                count++;
                i++;
            }
            string str = to_string(count);
            if(count == 1){
                chars[idx++] = ch;
            }else{
                chars[idx++] = ch;
                for(int c : str){
                    chars[idx++] = c;
                }
            }
            i--;
        }
        return idx;
    }
};