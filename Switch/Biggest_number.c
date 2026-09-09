#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter values: \n");
    scanf("%d %d %d", &a, &b, &c);
    switch(a,b,c){
        case 1: 
            a>b && a>c;
            printf("%d is the biggest\n", a);
        case 2: 
            b>c;
            printf("%d is the biggest\n", b);
        default :
            printf("%d is the biggest\n", c);
    }
    return 0;
}