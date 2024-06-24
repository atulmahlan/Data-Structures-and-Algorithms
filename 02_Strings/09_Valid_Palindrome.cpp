// QUESTION: A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

private:
    bool validChar(char ch){
        if((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

private:
    char toLowerCase(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) return ch;
        else 
        {
            char lowerch = ch - 'A' + 'a';
            return lowerch;
        }
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        int n = s.length();

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(validChar(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        for(int i = 0 ; i < temp.length() ; i++)
        {
            temp[i] = toLowerCase(temp[i]);
        }
        
        int start = 0;
        int end = temp.length() - 1;
        while(start <= end)
        {
            if(temp[start] != temp[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
