// QUESTION: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// SOLUTION 1------>

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalsum = n*(n+1)/2;
        
        int sum = 0;
        for(int i = 0; i < n ; i++)
        {
            sum = sum + nums[i];
        }

        return totalsum - sum;
    }

// SOLUTION 2------>

int missingNumber(vector<int>& a) {

    int xor1 = 0, xor2 = 0;
    int N = a.size();

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2);
}
