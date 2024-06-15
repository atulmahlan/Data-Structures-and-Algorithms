// QUESTION: Given an integer array nums, find the subarray with the largest sum, and return its sum.

int maxSubArray(vector<int>& nums) {
      int sum = 0;
      long long maximum = LONG_MIN;
      int start;
      int ansstart = -1;
      int ansend = -1;
      for (int i = 0 ; i < nums.size() ; i++) {
          sum = sum + nums[i];
          if ( sum > maximum ) {
              maximum = sum;
              ansstart = start;
              ansend = i;
          }
          if ( sum < 0 ) {
              sum = 0;
          }
      }
      return maximum;
  }
