// QUESTION: Given a binary string and an integer "k", return the maximum number of consecutive 1's in the string if you can flip at most "k" 0's.

int longestOnes(string s , int k) {
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for(; end < s.length() ; end++)
    {
        if(s[end] == '0')
        {
            zero_count++;
        }
        while(zero_count > k)
        {
            if(s[start] == '0')
            {
                zero_count--;
            }
            start++;
        }
        max_length = max(max_length , end-start+1);
    }
    return max_length;
}
