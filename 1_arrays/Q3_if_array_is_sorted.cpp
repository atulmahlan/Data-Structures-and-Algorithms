bool isSorted(int n, vector<int> a) {
    int i;
    for( i=0 ; i<n ; i++){
        if(a[i] >= a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
