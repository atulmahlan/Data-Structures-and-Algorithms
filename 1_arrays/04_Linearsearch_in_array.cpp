#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

int Lsearch(struct Array arr, int x){
    int i;
    for(i=0;i<arr.length;i++){
        if(x==arr.A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9,10},10,10};

    printf("%d", Lsearch(arr, 11));
}
