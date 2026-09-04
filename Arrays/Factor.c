#include<stdio.h>

// Tried finding factors with and without array

int main(){
    int n;
    printf("Enter your number: \n");
    scanf("%d", &n);
    printf("Factors of %d are:\n", n);
    for(int i=1; i<=n; i++){
        if(n % i ==0){
            printf("%d\n", i);
        }
    }

// With array

    int m;
    printf("Factors of how many numbers would you like to find out?\n");
    scanf("%d", &m);
    int numbers[m];
    printf("Enter the numbers for finding out factors: \n");
    for(int j=0; j<m; j++){
        scanf("%d", &numbers[j]);
        printf("Factors of the number %d are:\n", numbers[j]);
        for(int i=1; i<=numbers[j]; i++){
            if(numbers[j] % i ==0){
            printf("%d\n",i);
        }
    }
    }
    
    return 0;
}

