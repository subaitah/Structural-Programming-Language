#include<stdio.h>

int main(){

    int a,b,c,big,LCM;
    printf("Enter three values: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        big=a;
    }
    else if(b>c){
        big = b;
    }
    else{
        big = c;
    }
    for(int i=1; i<=big; i++){
        if(i % a==0 && i % b ==0 && i % c==0){
            LCM = i;
            break;
        }
    }
    printf("LCM = %d\n", LCM);
    return 0;
    
}