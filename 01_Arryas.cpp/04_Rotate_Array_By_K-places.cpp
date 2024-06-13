// QUESTION: Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

vector<int> reverse(vector<int>& arr, int start, int end) {
        int i = start;
        int j = end;

        while(i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        return arr;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0 || n == 1) return;
        k = k % n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
