#include<stdio.h>

int tables(int arr[11], int n){
    for(int i=0; i<10; i++){
        arr[i]= n*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int arr[11];
    tables(arr, 2);
    tables(arr, 3);
    return 0;
}
