#include<stdio.h>

// 1*1 + 2*2 + 4*4 + 7*7 + 1*11+...

int main(){
    int a;
    printf("Enter a value: \n");
    scanf("%d",&a);
    int sum=0;
    int term =1;
    for(int i=1; i<=a; i++){
        sum += term*term;
        term += i;
    }
    printf("Result: %d", sum);

    // Another way to print the series and sum. 

    for(int i=1; i<=a; i++){
        if(i<a){
            printf("%d*%d + ",term,term);
        }
        else{
            printf("%d*%d = ", term, term);
        }
        sum += term*term;
        term += i;
    }
    printf("%d",sum);
    return 0;
    
}