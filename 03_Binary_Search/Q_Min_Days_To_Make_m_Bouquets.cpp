// QUESTION: You are given an integer array bloomDay, an integer m and an integer k.
// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.


class Solution {
public:
    bool possible(vector<int> &arr, int day, int m, int k){
        int count = 0;
        int noOfBouquets = 0;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i] <= day) count++;
            else
            {
                noOfBouquets += count / k;
                count = 0;
            }
        }
        noOfBouquets += count / k;
        return noOfBouquets >= m;
    }

public:
    int minDays(vector<int> &arr, int m, int k) {
        long long val = m * 1LL * k * 1LL;
        if(val > arr.size()) return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
        }

        int low = mini;
        int high = maxi;

        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(possible(arr, mid, m, k))
            {
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return low;
    }    
};
