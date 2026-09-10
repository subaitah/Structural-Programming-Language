#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    int *odd;
    if(n%2!=0){
        odd = (int*)calloc(((n-1)/2)+1, sizeof(int));
        printf("Enter the odd numbers upto %d: \n", n);
        for(int i=0; i<((n-1)/2)+1; i++){
            scanf("%d", &odd[i]);
            printf("The odd numbers are: %d\n", odd[i]);
    }
    }
    else{
        odd = (int*)calloc(n/2, sizeof(int));
        printf("Enter the odd numbers upto %d: \n", n);
        for(int i=0; i<n/2; i++){
            scanf("%d", &odd[i]);
            printf("The odd numbers are: %d\n", odd[i]);
    }
    }
    int m =n+1;
    if(m%2!=0){
        realloc(odd, ((m-1)/2)*sizeof(int));
        printf("Enter the even numbers upto %d: \n", m);
        for(int i=0; i<(m-1)/2; i++){
            scanf("%d", &odd[i]);
            printf("The even numbers are: %d\n", odd[i]);
    }
    }
    else{
        realloc(odd, m/2 * sizeof(int));
        printf("Enter the even numbers upto %d: \n", m);
        for(int i=0; i<m/2; i++){
            scanf("%d", &odd[i]);
            printf("The even numbers are: %d\n", odd[i]);
    }
    }
    return 0;
}