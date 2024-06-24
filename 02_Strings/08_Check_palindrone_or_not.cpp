// QUESTION: Given a string, check if it is palindrone or not.

char toLowerCase(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) return ch;
    else 
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrone(string s) {
    int n = s.length();
    int start = 0;
    int end = n-1;
    
    while(start <= end)
    {
        if(toLowerCase(s[start]) != toLowerCase(s[end]))
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
