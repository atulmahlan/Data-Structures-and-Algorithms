// QUESTION: Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if it is greater than all // the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.


class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> answers;
      
        int max = arr[n-1];
        answers.push_back(max);
        
        for (int i = n-2; i >= 0; i--) 
        {
            if (arr[i] >= max) 
            {
                max = arr[i];
                answers.push_back(max);
            }
        }
        
        reverse(answers.begin(), answers.end());
        return answers;
    }
};
