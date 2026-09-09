#include<stdio.h>

    int main(){
    int n, sum=0;
    float avg;
    int count = 0;
    printf("Enter n value: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            count++;
            sum +=i;
        }
    }
    avg = sum/count;
    printf("%.2f", avg);
    return 0;
    
}