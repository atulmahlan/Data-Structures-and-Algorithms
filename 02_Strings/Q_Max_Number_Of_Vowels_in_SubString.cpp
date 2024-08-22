// QUESTION: Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.


class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};

        int maxVowels = 0;
        int currentVowels = 0;

        for(int i = 0 ; i < k ; i++)
        {
            if(vowels.count(s[i]))
            {
                currentVowels++;
            }
        }

        maxVowels = currentVowels;

        for(int i = k ; i < s.size() ; i++)
        {
            if(vowels.count(s[i - k]))
            {
                currentVowels--;
            }

            if(vowels.count(s[i]))
            {
                currentVowels++;
            }

            maxVowels = max(maxVowels,currentVowels);
        }
        return maxVowels;
    }
};
