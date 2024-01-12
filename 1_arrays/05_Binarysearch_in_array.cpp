#include <Stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

int Bsearch(struct Array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if (key<arr.A[mid])
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{11,43,56,32,78,43,89},10,7};

    printf("%d\n", Bsearch(arr,43));

    return 0;
}
