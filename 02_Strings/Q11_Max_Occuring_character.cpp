// QUESTION: Given a string, return the char that occurs the maximum number of times.

char maxOccChar(string s) {
    int arr[26] = {0};
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        char ch = s[i];
        int index = 0;
        
        if(ch >= 'a' && ch <= 'z')
        {
            index = ch - 'a';
        }
        
        else 
        {
            index = ch - 'A';
        }
        
        arr[index]++;
    }
    
    int maxi = -1;
    int ans = 0;
    
    for(int i = 0 ; i < 26 ; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    int finalAns = ans + 'a';
    return finalAns;
}
