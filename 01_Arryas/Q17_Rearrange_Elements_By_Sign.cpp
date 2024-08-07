// QUESTION: You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
// You should return the array of nums such that the the array follows the given conditions:
// 1. Every consecutive pair of integers have opposite signs.
// 2. For all integers with the same sign, the order in which they were present in nums is preserved.
// 3. The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();
      int posindex = 0, negindex = 1;
      vector<int> ans(n, 0);
      for ( int i=0 ; i<n ; i++) {
          if (nums[i] < 0 ) {
              ans[negindex] = nums[i];
              negindex = negindex + 2;
          }
          else {
              ans[posindex] = nums[i];
              posindex = posindex + 2;
          }
      }
      return ans;
  }
