// QUESTION: Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if it is greater than all the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

vector<int> leaders(int n, int arr[]) {
      vector<int> ans;
      int maxi = INT_MIN;
      
      for(int i = n-1 ; i >= 0 ; i--)
      {
          if(arr[i] >= maxi) {
              ans.push_back(arr[i]);
          }
          maxi = max(maxi,arr[i]);
      }
      sort(ans.begin(),ans.end());
      reverse(ans.begin(),ans.end());
      return ans;
  }
