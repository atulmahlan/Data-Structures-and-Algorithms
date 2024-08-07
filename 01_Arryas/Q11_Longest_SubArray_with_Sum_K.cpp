// QUESTION: Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

int lenOfLongSubarr(int a[],  int n, int k) 
{ 
    int left = 0, right = 0;
    int sum = a[0];
    int maxLen = 0;
    while (right < n) {
          while (left <= right && sum > k) {
                sum -= a[left];
                left++;
            }
    
            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
    
            right++;
            if (right < n) sum += a[right];
      }
    
      return maxLen;
  }
