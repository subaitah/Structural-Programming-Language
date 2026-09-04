#include<stdio.h>

int main(){
    int arr[2][10];
    tables(arr, 2, 10);
    tables(arr, 3, 10);
}
int tables(int arr[2][10], int r, int n){
    for(int i=0; i<=n; i++){
        arr[r][10]= n*(i++);
    }
    printf("%d", arr[r][10]);
}

// int main(){
//     int n;
//     printf("Enter n value(n>2)");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     fib[2] = 1;
//     for(int i=2; i<n; i++){
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d \t", fib[i]);
    
//     }
//     printf("\n");


//     // printArray(arr, 5);
//     // numbers(arr, 5);
//     return 0;
// }



// void numbers(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[n-i-1] = firstval;
//         arr[i]= secondval ;
//         // printf("%d\n", arr[i]);
//     }
  
//     return 0;
// // }
// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }
// }