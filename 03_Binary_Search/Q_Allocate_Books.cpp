// QUESTION: Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
// There are ‘m’ number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
// If the allocation of books is not possible, return -1.


int StuCount(vector<int> &arr, int pages) {
    int stucnt = 1; 
    long long pagesstu = 0;
    for(int i = 0; i<arr.size(); i++) 
    {
        if (pagesstu + arr[i] <= pages) 
        {
            pagesstu += arr[i];
        }
        else 
        {
            stucnt +=1;
            pagesstu = arr[i];
        }
    }
    return stucnt;
}

int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1;

    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    
    while (low <= high) 
    {
        int mid = (low + high)/2;

        int cntstudents = StuCount(arr,mid);
        
        if (cntstudents > m) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}
