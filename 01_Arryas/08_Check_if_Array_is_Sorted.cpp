// QUESTION: Given an array nums, return true if the array is sorted, otherwise return false.

bool isSorted(vector<int>& arr) {
    int i = 1;
    for(i = 1 ; i < arr.size() ; i++) {
        if(arr[i-1] > arr[i]) {
          return false;
        }
    }
    return true;
}
