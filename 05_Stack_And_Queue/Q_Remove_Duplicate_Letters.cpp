// QUESTION: Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order
// among all possible results.


class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26,0);

        for(int i = 0 ; i < s.size() ; i++)
        {
            freq[s[i] - 'a']++;
        }

        stack<char> st;
        vector<bool> seen(26,false);

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(seen[s[i] - 'a'])
            {
                freq[s[i] - 'a']--;
                continue;
            }
            while(!st.empty() && s[i] < st.top() && freq[st.top() - 'a'] > 0)
            {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i] - 'a'] = true;
            freq[s[i] - 'a']--;
        }

        string ans = "";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
