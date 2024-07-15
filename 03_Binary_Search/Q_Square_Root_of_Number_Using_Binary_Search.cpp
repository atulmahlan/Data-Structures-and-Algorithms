// QUESTION: Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int low = 1;
        int high = x;
        long long int ans = 0;
        
        while(low <= high)
        {
            long long int mid = (low + high) / 2;
            
            if((mid * mid) <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};
