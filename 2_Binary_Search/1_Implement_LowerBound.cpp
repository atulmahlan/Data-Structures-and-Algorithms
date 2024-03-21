int lowerBound (vector<ints arr, int n,
int x) {
    int low = 0, high = n-1;
    int ans = n;
    while(low < high) {
        int mid = (low + high) /2;
        if( arr[midl >= x>{
            ans F mid;
            high = mid - 1;
          ｝
        else {
            low = mid + 1;
        ｝
     return ans;
}
