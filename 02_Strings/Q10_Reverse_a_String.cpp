// QUESTION: Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

  void reverseString(vector<char>& s) {
      int start = 0;
      int end = s.size() - 1;

      while(start < end)
      {
          swap(s[start++],s[end--]);
      }
  }
