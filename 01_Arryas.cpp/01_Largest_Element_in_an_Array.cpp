//QUESTION: Given an array A[] of size n. The task is to find the largest element in it.
int largest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
