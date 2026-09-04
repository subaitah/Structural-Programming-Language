#include<stdio.h>

int fact1(int n){
    if( n==1){
        return n;
    }
    else{
        return fact1(n-1) * n;
    }
}

int main(){
    fact1(5);
    printf("%d", fact1(5));
    return 0;
}
