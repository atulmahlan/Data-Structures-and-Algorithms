int SecondLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = -1;
    int i;
    for(i=1 ; i<n ; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int SecondSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    int i;
    for(i=1 ; i<n ; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int slargest = SecondLargest(arr,n);
    int ssmallest = SecondSmallest(arr,n);
    return {slargest, ssmallest};
}
