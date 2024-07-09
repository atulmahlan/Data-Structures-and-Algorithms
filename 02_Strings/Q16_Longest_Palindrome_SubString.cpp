// QUESTION: Given a string s, find the longest palindromic subsequence's length in s.


    int longestPalindromeSubseq(string s) {
        int n = s.size();

        if(n <= 1) return n;

        string LPS = "";

        for(int i = 0 ; i < n ; i++)
        {
            int low = i;
            int high = i;
            while(s[low] == s[high])
            {
                high++;
                low--;

                if(low == -1 || high == n)
                {
                    break;
                }
            }

            string palindrome = s.substr(low+1,high);
            if(palindrome.size() > LPS.size())
            {
                LPS = palindrome;
            }

            low = i - 1;
            high = i;
            while(s[low] == s[high])
            {
                low--;
                high++;

                if(low == -1 || high == n)
                {
                    break;
                }
            }
            
            palindrome = s.substr(low+1,high);
            if(palindrome.size() > LPS.size())
            {
                LPS = palindrome;
            }
        }
        return LPS.size();
    }
