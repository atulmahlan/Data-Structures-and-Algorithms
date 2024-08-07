// QUESTION: Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
// Note that after backspacing an empty text, the text will continue empty.


class Solution {
private:
    string processStr(string str) {
        stack<char> st;

        for(int i = 0 ; i < str.size() ; i++)
        {
            if(str[i] == '#')
            {
                if(!st.empty()) st.pop();
            }
            else 
            {
                st.push(str[i]);
            }
        }

        string finalStr = "";
        while(!st.empty())
        {
            finalStr += st.top();
            st.pop();
        }
        return finalStr;
    }

public:
    bool backspaceCompare(string s, string t) {
        return processStr(s) == processStr(t);
    }
};
