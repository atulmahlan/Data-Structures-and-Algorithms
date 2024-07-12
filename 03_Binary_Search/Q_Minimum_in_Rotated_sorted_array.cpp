// QUESTION: Given the sorted rotated array nums of unique elements, return the minimum element of this array.
// You must write an algorithm that runs in O(log n) time.


class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1;
        int mini = INT_MAX;

        while(low <= high) 
        {
            int mid = (low+high)/2;
            if(arr[low] <= arr[mid])
            {
                mini = min(mini,arr[low]);
                low = mid+1;
            }
            else 
            {
                mini = min(mini,arr[mid]);
                high = mid-1;
            }
        }
        return mini;
    }
};
