class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i=0; i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
                stack.push(s[i]);
            else if(s[i]=='}' || s[i]==')' || s[i]==']')
            {
                if(stack.empty())
                    return false;
                else {
                    char temp = stack.top();
                    stack.pop();
                    if(s[i]==')' && (temp=='{' || temp=='[' ))
                        return false;
                    if(s[i]==']' && (temp=='{' || temp=='(' ))
                        return false;
                    if(s[i]=='}' && (temp=='(' || temp=='[' ))
                        return false;
                }
            }
        }
        return stack.empty();
           
    }
};
