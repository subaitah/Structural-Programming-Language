#include<stdio.h>

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
        printf("Temperature of %s city in Farenheight is: %.2f\n", city[i], (temp[i]*9/5)+32);
    }
return 0;
}



    // printf("Enter the name of the city1:\n");
    // scanf(" %19s", City1);
    // printf("Enter the the temperature of city1 (in Celsius):\n");
    // scanf("%f", &T1);
    // printf("Enter the name of the city2:\n");
    // scanf(" %19s", City2);
    // printf("Enter the the temperature of city2 (in Celsius):\n");
    // scanf("%f", &T2);
    // printf("Enter the name of the city3:\n");
    // scanf(" %19s", City3);
    // printf("Enter the the temperature of city3 (in Celsius):\n");
    // scanf("%f", &T3);
