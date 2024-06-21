// QUESTION: Given a string of n length, write algorithm to sort it.

string countSort(string str) {
    vector<int> freq(26,0);
    int n = str.length();

    for(int i = 0 ; i < n ; i++)
    {
        int index = i - 'a';
        freq[index]++;
    }

    int j = 0;
    for(int i = 0 ; i < 26 ; i++)
    {
        while(freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
    return str;
}
