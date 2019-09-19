class Solution {
public:
    bool isValid(string s) {
        long long int i;
        stack<char> st;

        if(s.size() % 2) return false;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s.at(i));
            else{
                if ((s[i]=='}'||s[i]==')'||s[i]==']') && st.empty())
                    return false;
                else  if(st.top()=='(' && s[i]==')')
                    st.pop();
                else if(st.top()=='[' && s[i]==']')
                    st.pop();
                else  if(st.top()=='{' && s[i]=='}')
                    st.pop();
                else break;
            }
        }

        if(st.empty()) return true;
        else return false;

    }
};
