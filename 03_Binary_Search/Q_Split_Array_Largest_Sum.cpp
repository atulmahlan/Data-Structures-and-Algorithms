// QUESTION: Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.
// Return the minimized largest sum of the split.
// A subarray is a contiguous part of the array.


class Solution {
public:
    int Possibility(vector<int> &a, int sum) {
        int count = 1, sumOfSubarray = 0;
        for (int i = 0; i<a.size(); i++) 
        {
            if (sumOfSubarray + a[i] <= sum) 
            {
                sumOfSubarray += a[i];
            }
            else 
            {
                count++;
                sumOfSubarray = a[i];
            }
        }
        return count;
    }
        
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);

        while (low <= high) 
        {
            int mid = (low + high)/2;
            int arrayCount = Possibility(nums,mid);

            if (arrayCount > k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};
