#include<stdio.h>

// Q : Read item details from input and print a short receipt.

int main(){
    float price[100];
    char item[100][100];
    int n;
    float total = 0;
    printf("Enter number of items: \n");
    scanf("%d", &n);
    for(int j = 0; j<n; j++){
        printf("Enter name of item %d: \n", j+1);
        scanf("%s", item[j]);
        printf("Enter the price of %s: \n", item[j]);
        scanf("%f", &price[j]);
        total += price[j];       
    }
    for(int i=0; i<n; i++){
        printf("The price of %s is %.2f\n", item[i], price[i]);
    }
    printf("Total items: %d\n", n);
    printf("Total price: %.2f\n", total);
    int paid;
    printf("Enter customer paid amount: \n");
    scanf("%d", &paid);
    printf("Cash return: %.2f", paid - total);
    return 0;

}