#include<stdio.h>

int main(){
    int a,b,c,small,GCD;
    printf("Enter three values: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b && a<c){
        small=a;
    }
    else if(b<c){
        small = b;
    }
    else{
        small = c;
    }
    for(int i=1; i<=small; i++){
        if(a % i==0 && b % i ==0 && c % i==0){
            GCD = i;
        }
    }
    printf("GCD = %d\n", GCD);
    return 0;
}