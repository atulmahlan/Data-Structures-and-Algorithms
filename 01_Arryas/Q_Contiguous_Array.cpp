// QUESTION: Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> cumSumIndex;
        int cumSum = 0;
        int maxLength = 0;
        cumSumIndex[0] = -1;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            cumSum += (nums[i] == 1 ? 1 : -1);

            if(cumSumIndex.find(cumSum) != cumSumIndex.end())
            {
                maxLength = max(maxLength, i - cumSumIndex[cumSum]);
            }
            else 
            {
                cumSumIndex[cumSum] = i;
            }
        }
        return maxLength;
    }
};
