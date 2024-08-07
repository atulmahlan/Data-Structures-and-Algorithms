// QUESTION: Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

int majorityElement(vector<int>& nums) {
      int i = 0;
      int n = nums.size();
      int count = 0;
      int el;

      for(i = 0 ; i < n ; i++)
      {
          if(count == 0)
          {
              count = 1;
              el = nums[i];
          }
          else if(el == nums[i]) count++;
          else count--;
      }

      int countel = 0;
      for(int i = 0 ; i < n ; i++)
      {
          if(nums[i] == el)
          {
              countel++;
          }
      }

      if(countel > (n/2)) return el;
      return -1;
  }
