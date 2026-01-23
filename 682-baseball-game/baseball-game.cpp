class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int sum = 0;
        for(string c : operations){
            if(c == "+"){
                int t1 = record.top();
                record.pop();
                int t2 = record.top();
                record.push(t1);
                int add = t1 + t2;
                record.push(add);
            }else if(c == "D"){
                record.push(record.top() * 2);
            }else if(c == "C"){
                record.pop();
            }else{
                record.push(stoi(c));
            }
        }
        while(!record.empty()){
            sum += record.top();
            record.pop();
        }
        return sum;
    }
};