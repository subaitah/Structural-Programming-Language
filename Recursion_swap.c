#include<stdio.h>

int main(){
    int a=2, b=3;
    swap(&a, &b);
    printf("a=%d \nb=%d", a,b);
    return 0;
}

int swap(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
    printf("x=%d \ny=%d\n",*x, *y);
    return 0;
}
