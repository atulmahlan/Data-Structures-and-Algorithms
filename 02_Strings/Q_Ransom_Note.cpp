// QUESTION: Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
// Each letter in magazine can only be used once in ransomNote.


class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        unordered_map<char, int> charCount;

        for (char c : magazine) 
        {
            charCount[c]++;
        }

        for (char c : ransomNote) 
        {
            if (charCount[c] > 0) 
            {
                charCount[c]--;
            } 
            else 
            {
                return false; 
            }
        }

        return true; 
    }
};
