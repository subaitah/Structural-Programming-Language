#include<stdio.h>

void numbers(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[n-i-1] = firstval;
        arr[i]= secondval ;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    numbers(arr, 5);
    printf("Reversed array is: \n");
    printArray(arr, 5);
    return 0;
}


