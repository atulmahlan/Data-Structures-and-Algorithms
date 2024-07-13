// QUESTION: Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. 
Find the smallest divisor such that the result mentioned above is less than or equal to threshold.


class Solution {
public:
    int sumofD(vector<int>& arr,int d){
        int sum = 0;

        for(int i = 0; i<arr.size(); i++)
        {
            sum += ceil((double)(arr[i])/(double)(d));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1; 
        int high = *max_element(nums.begin(),nums.end());

        while(low <= high)
        {
            int mid = (low + high)/2;
            if(sumofD(nums,mid) <= threshold)
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
