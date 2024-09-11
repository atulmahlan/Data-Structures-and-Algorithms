// QUESTION: Given two strings consisting of lowercase english alphabets, the task is to check whether these strings are meta strings or not. 
// Meta strings are the strings which can be made equal by exactly one swap in any of the strings. Equal string are not considered here as Meta strings.


bool metaStrings (string S1, string S2)
{
    vector<int> freqS1(26,0);
    vector<int> freqS2(26,0);
    int count = 0;
    
    if(S1.size() != S2.size()) return false;
    if(S1 == S2) return false;
    
    for(int i = 0 ; i < S1.size() ; i++)
    {
        if(S1[i] != S2[i]) count++;
        
        char c1 = S1[i];
        char c2 = S2[i];
        freqS1[c1 - 'a']++;
        freqS2[c2 - 'a']++;
    }
    
    if(count > 2) return false;
    
    
    for(int i = 0 ; i < 26 ; i++)
    {
        if(freqS1[i] != freqS2[i]) return false;
    }
    
    return true;
}
