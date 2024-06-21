// QUESTION: Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

bool isIsomorphic(string s, string t) {
      vector<int> v1(128,-1);
      vector<int> v2(128,-1);

      if(s.length() != t.length()) return false;

      for(int i = 0 ; i < s.length() ; i++)
      {
          if(v1[s[i]] != v2[t[i]])
          {
              return false;
          }
          v1[s[i]] = v2[t[i]] = i;
      }
      return true;
  }
