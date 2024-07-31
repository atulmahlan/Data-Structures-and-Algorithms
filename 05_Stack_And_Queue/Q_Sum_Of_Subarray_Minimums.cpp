// QUESTION: Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. 
// Since the answer may be large, return the answer modulo 109 + 7.


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> s;
        
        for (int i = 0; i < n; ++i) 
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        
        while (!s.empty()) s.pop();
        
        for (int i = n - 1; i >= 0; --i) 
        {
            while (!s.empty() && arr[s.top()] > arr[i])
                s.pop();
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        
        long long result = 0;
        for (int i = 0; i < n; ++i) 
        {
            int leftDist = i - left[i];
            int rightDist = right[i] - i;
            result = (result + (long long)arr[i] * leftDist * rightDist) % MOD;
        }
        
        return (int)result;
    }
};
