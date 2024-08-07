// QUESTION: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

int singleNumber(vector<int>& nums) {
      int xorr = 0;
      for ( int i=0 ; i < nums.size() ; i++) {
          xorr = xorr ^ nums[i];
      }
      return xorr;
  }
