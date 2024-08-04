// QUESTION: Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order
// among all possible results.


class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> inStack(26, false); 
        
        for (char c : s) 
        {
            freq[c - 'a']++;
        }
        
        string result = "";
        
        for (char c : s) 
        {
            freq[c - 'a']--;
            
            if (inStack[c - 'a']) 
            {
                continue;
            }
            
            while (!result.empty() && result.back() > c && freq[result.back() - 'a'] > 0) 
            {
                inStack[result.back() - 'a'] = false; 
                result.pop_back();
            }
            
            result.push_back(c); 
            inStack[c - 'a'] = true; 
        }
        
        return result;
    }
};
