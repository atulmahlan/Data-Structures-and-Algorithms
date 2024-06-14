// QUESTION: Given a binary array nums, return the maximum number of consecutive 1's in the array.

int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maximum = 0;

        for ( int i = 0; i < nums.size(); i++){
            if ( nums[i] == 1){
                count++;
                maximum = max(count,maximum);
            }
            else{
                count = 0;
            }
        }
        return maximum;
  }
