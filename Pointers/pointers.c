#include<stdio.h>

int main(){
    int a,b;
    int sum, prod, avg;
    printf("Enter values",a,b);
    scanf("%d %d", &a, &b);
    math(a,b,&sum,&prod,&avg);
    printf("sum=%d\nprod=%d\navg=%d\n",sum,prod,avg);
    return 0;
}

int math(int a, int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=*sum/2;
}