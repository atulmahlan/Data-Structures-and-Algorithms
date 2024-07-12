// QUESTION: Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
// You must decrease the overall operation steps as much as possible.


class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while(low <= high)
        {
            int mid = (low + high)/2;

            if(arr[mid] == target) return true;

            if(arr[low] == arr[mid] && arr[mid] == arr[high])
            {
                low++;
                high--;
                continue;
            }

            else if(arr[low] <= arr[mid])
            {
                if(target <= arr[mid] && arr[low] <= target)
                {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            else 
            {
                if(target >= arr[mid] && target <= arr[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
