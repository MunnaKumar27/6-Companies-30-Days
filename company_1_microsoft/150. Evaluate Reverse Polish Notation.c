Link=https://leetcode.com/problems/evaluate-reverse-polish-notation/
class Solution {
public:
    int evalRPN(vector<string>& tokens) { 
        stack <long> s;
        for(auto t: tokens)
        {
            if(t=="+"||t=="*"||t=="-"||t=="/")
            {
                long x=s.top(); 
                s.pop();
                long y=s.top();
                s.pop();
                switch(t.front())
                {
                    case '+':
                        y=y+x;
                        break;
                    case '-':
                        y=y-x;
                        break;
                    case '*':
                        y=y*x;
                        break;
                    case '/':
                        y=y/x;
                        break;
                }
                s.push(y);
            }
            else
                s.push(stoi(t));
        }
        return s.top(); 
    }
};