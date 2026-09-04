#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter n numbers:");
    scanf("%d", &n);
    int i=1; 
    do {
        int j= pow(i,n);
        sum = sum + j;
        i++;
    } while(i<=n);
    printf("%d is armstrong number", sum);
    return 0;
}