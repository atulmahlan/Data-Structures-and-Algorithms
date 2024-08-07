// QUESTION: Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int leftMultiples = 1;
        for(int i = 0 ; i < n ; i++)
        {
            answer[i] = leftMultiples;
            leftMultiples *= nums[i];
        }

        int rightMultiples = 1;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            answer[i] *= rightMultiples;
            rightMultiples *= nums[i];
        }
        return answer;
    }
};
