// QUESTION: Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.
int print2largest(int arr[], int n) {
	    int largest = arr[0];
	    int sLargest = -1;
	    
	    for(int i = 1 ; i < n ; i++)
	    {
	        if(arr[i] > largest)
	        {
	            sLargest = largest;
	            largest = arr[i];
	        }
	        
	        else if(arr[i] > sLargest && arr[i] != largest)
	        {
	            sLargest = arr[i];
	        }
	    }
	    return sLargest;
	}
