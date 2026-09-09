#include<stdio.h>

int main(){
    int n;
    printf("Enter n value (n>2)\n");
    scanf("%d",&n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    printf("%d \t %d \t %d \t", fib[0], fib[1], fib[2]);
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    
    }
    printf("\n");
    return 0;
}
