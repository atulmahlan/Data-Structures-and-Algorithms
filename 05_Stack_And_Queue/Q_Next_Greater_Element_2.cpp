// QUESTION: Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater  // number. If it doesn't exist, return -1 for this number.

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,-1);
        stack<int> s;

        for(int i = 0 ; i < 2 * n ; i++)
        {
            int num = nums[i % n];

            while(!s.empty() && nums[s.top()] < num)
            {
                result[s.top()] = num;
                s.pop();
            }

            if(i < n) s.push(i);
        }

        return result;
    }
};
