// QUESTION: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> hashmap;
      for(int i=0 ; i<nums.size() ; i++) {
          int num = nums[i];
          int more = target - num;
          if ( hashmap.find(more) != hashmap.end()) {
              return {hashmap[more] , i};
          }
          hashmap[num] = i;
      }
      return {-1,-1};
  }
