#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter n value: \n");
    scanf("%d", &n);
    int *val;
    val=(int*)calloc(n, sizeof(int));
    printf("Enter your values: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &val[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\n", val[i]);
    }
    val=realloc(val,n+2);
    printf("Enter your values: \n");
    for(int i=0; i<n+2; i++){
        scanf("%d", &val[i]);
    }
    for(int i=0; i<n+2; i++){
        printf("%d\n", val[i]);
    }
    return 0;
}