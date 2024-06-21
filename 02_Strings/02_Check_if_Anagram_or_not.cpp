// QUESTION: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

bool isAnagram(string s, string t) {
      vector<int> freq(26,0);
      if(s.length() != t.length()) return false;

      for(int i = 0 ; i < s.length() ; i++)
      {
          freq[s[i] - 'a']++;
          freq[t[i] - 'a']--;
      }

      for(int i = 0 ; i < 26 ; i++)
      {
          if(freq[i] != 0) return false;
      }
      return true;
  }
