#include<stdio.h>

int main(){
    int n;
    printf("Enter n numbers:");
    scanf("%d", &n);
    switch(n>=1){
        case 1:
            printf("%d is a natural number", n);
            break;
        default:
            printf("%d is not a natural number", n);
    }
    return 0;
}