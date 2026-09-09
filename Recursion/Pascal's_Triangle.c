#include<stdio.h>

int f(int n, int r);
int main(){
    int n, r;
    printf("Enter the value of n and r: \n");
    scanf("%d %d", &n, &r);
    printf("Pascal's Triangle for n = %d, r = %d is: %d\n", n,r,f(n,r));
    return 0;
}
int f(int n, int r){
    if( r==0 || r==n){
        return 1;
    }
    else{
        return f(n-1, r) + f(n-1, r-1);
    }
}
