// QUESTION: A conveyor belt has packages that must be shipped from one port to another within days days.
// The ith package on the conveyor belt has a weight of weights[i]. 
// Each day, we load the ship with packages on the conveyor belt (in the order given by weights). 
// We may not load more weight than the maximum weight capacity of the ship.
// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.


class Solution {
public:
    int ReqDays(vector<int> &weights, int capacity){
        int days = 1, load = 0;

        for(int i=0; i<weights.size(); i++) 
        {
            if( load + weights[i] > capacity)
            {
                days = days + 1;
                load = weights[i];
            }
            else 
            {
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low <= high)
        {
            int mid = (low+high)/2;
            int noOfDays = ReqDays(weights, mid);

            if(noOfDays <= days)
            {
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }
        }
        return low;
    }
};
 
