int firstOccurence(vector<int> &arr, int n, int x){
    int first = -1;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] == x){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x) low = mid + 1;
        else high = mid-1;
    }
    return first;
}

int lastOccurence(vector<int> &arr, int n, int x){
    int last = -1;
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = firstOccurence(arr, n, k);
    if(first == -1) return {-1,-1};
    int last = lastOccurence(arr, n, k);
    return {first,last};
}
