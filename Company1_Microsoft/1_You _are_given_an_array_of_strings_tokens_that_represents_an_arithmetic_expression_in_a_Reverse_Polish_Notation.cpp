/* Created By Rana Jay on 05-01-2023  12:26 

  problem -> https://leetcode.com/problems/evaluate-reverse-polish-notation/
  Concept -> Stack , string to int conversion 
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int>s;
        s.push(0);
        s.push(0);
        long long int x,y,z;
        for(int i=0;i<tokens.size();++i){
            if(tokens[i].size()>1){
                s.push(stoi(tokens[i]));
            }
            else{
            switch(tokens[i][0]){
                case '+':
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                //cout<<"rj"<<x+y;
                s.push(x+y);
                break;
                case '-':
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(y-x);
                break;
                case '*':
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(x*y);
                break;
                case '/':
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(y/x);
                break;
                default :
                //cout<<"rj"<<s.top();
                s.push(stoi(tokens[i]));
                //cout<<"rj"<<s.top();
            }}
        }
        return s.top();
    }
};
