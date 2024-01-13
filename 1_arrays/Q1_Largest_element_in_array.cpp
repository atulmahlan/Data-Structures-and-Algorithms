#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    int i;
    for(i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
