// QUESTION: Given a sorted array arr[] of size n without duplicates, and given a value x. 
// Floor of x is defined as the largest element k in arr[] such that k is smaller than or equal to x. 
// Find the index of k(0-based indexing).


    int findFloor(vector<long long> v, long long n, long long x) {
        int low = 0;
        int high = n-1;
        
        int ans = -1;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(v[mid] == x) return mid;
            else if(v[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
            
        }
        return ans;
    }
};
