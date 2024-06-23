// QUESTION: Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

string longestCommonPrefix(vector<string>& strs) {
      string str1 = strs[0];
      int ans_length = str1.size();

      for(int i = 1 ; i < strs.size() ; i++)
      {
          int j = 0;
          while(j < str1.size() && j < strs[i].size() && str1[j] == strs[i][j])
          {
              j++;
          }
          ans_length = min(ans_length,j);
      }
      string ans = str1.substr(0 , ans_length);
      return ans;
  }
