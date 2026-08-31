#include<stdio.h>

int main(){
    int n;
    printf("Information of how many people would you like to enter: \n");
    scanf("%d", &n);
    char name[n][100];
    int age[20];
    char city[n][100];
    int i=0;
    for(i; i<n; i++){
        printf("Enter the info for person %d: \n", i+1);
        scanf("%s", name[i]);
        scanf("%d", &age[i]);
        scanf("%s", city[i]);
    }
    for(int j=0;; j<n; j++){    
        printf("Information of person %d is:\n%s\n%d\n%s\n", j+1, name[j], age[j], city[j]);
    }
    return 0;
}