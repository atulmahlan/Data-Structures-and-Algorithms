#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

int Get(struct Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array arr, int index, int x){
    if(index>=0 && index<arr.length){
        arr.A[index]=x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    int i;
    for(i=0;i<arr.length;i++){
        sum = sum + arr.A[i];
    }
    return sum;
}

int Avg(struct Array arr){
    int sum = 0;
    int count = 0;
    int i, avg;
    for(i=0;i<arr.length;i++){
        sum = sum + arr.A[i];
        count++;
    }
    avg = sum/count;
    return avg;
}

int main(){
    struct Array arr = {{12,34,56,78,90,32,54,76,98,68},10,10};

    printf("%d", Avg(arr));
}
