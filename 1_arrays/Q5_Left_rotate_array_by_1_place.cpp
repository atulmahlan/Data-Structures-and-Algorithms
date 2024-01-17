#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int firstelement = arr[0];
    int i;
    for( i=1 ; i<n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = firstelement;
    return arr;
}
