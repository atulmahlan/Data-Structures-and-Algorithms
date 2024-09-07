// QUESTION: Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) 
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) 
            {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) 
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                }
                else if (sum < 0) 
                {
                    left++;
                }
                else 
                {
                    right--;
                }
            }
        }
        
        return result;
    }
};
