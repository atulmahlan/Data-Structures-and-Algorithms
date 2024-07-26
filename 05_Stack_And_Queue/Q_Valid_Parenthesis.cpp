// QUESTION: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.


class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else 
            {
                if(st.empty()) return false;

                char c = st.top();
                st.pop();

                if((s[i] == ')' && c == '(') ||
                (s[i] == ']' && c == '[') ||
                (s[i] == '}' && c == '{'))
                {
                    continue;
                }

                else 
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
