#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

int IsSorted(struct Array arr, int length){
    int i;
    for(i=0; i<length-1; i++){
        if(arr.A[i] > arr.A[i+1]){
            return -1;
        }
    }
    return 1;
}

int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,10,9},10,10};
    printf("%d", IsSorted(arr,10));
}
