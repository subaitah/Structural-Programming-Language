#include<stdio.h>
// Tried finding out temperatures of different cities with loop and converting them to Fahrenheit.

int main(){
    int n;
    printf("Enter the number of cities you want to check:");
    scanf("%d", &n);
    float temp[20];
    char city[20][50];

    for(int i=0; i<n; i++){
        printf("Enter city %d name: \n",i+1);
        scanf(" %49s",city[i]);
        printf("Enter temp (in Celsius) of city %d: \n", i+1);
        scanf(" %f",&temp[i]);
    }
    for(int i=0; i<n; i++){
        printf("Temperature of %s city in Fahrenheit is: %.2f\n", city[i], (temp[i]*9/5)+32);
    }
return 0;
}
