// QUESTION: You are given two integer arrays of equal length target and arr. 
// In one step, you can select any non-empty subarray of arr and reverse it. You are allowed to make any number of steps.
// Return true if you can make arr equal to target or false otherwise.


class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : target) 
        {
            freq[num]++;
        }

        for (int num : arr) 
        {
            if (--freq[num] < 0) 
            {
                return false;
            }
        }

        return true;
    }
};
