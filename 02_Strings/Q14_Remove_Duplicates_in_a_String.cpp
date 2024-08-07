// QUESTION: You are given a string s consisting of lowercase English letters. 
// A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

string removeDuplicates(string s) {
        int i = 0;
        int n = s.length();

        for (int j = 0; j < n; j++) 
        {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i])
            {
                i = i - 2;
            }    
            i++;
        }
        return s.substr(0, i);
    }
