#include<stdio.h>

int main(){

    int n;
    printf("Enter n value: \n");
    scanf("%d", &n);
    int sum=0;
    int a=0;
    int b=1;
    int c;
    for(int i=1; i<=n; i++){
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\n", sum);
    return 0;
    
}