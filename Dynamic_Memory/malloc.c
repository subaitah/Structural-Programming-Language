#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of students in class: \n");
    scanf("%d", &n);
    char *name[100];
    for(int i=0; i<n; i++){
        name[i]=malloc(100*sizeof(char));
    }
    int *roll;
    roll=(int*)malloc(n*sizeof(int));
    printf("Enter the names and rolls of students in class: \n");
    for(int i=0; i<n; i++){
        scanf(" %99[^\n]", name[i]);
        scanf("%d", &roll[i]);
    }
    printf("The information of students are:\n");
    for(int i=0; i<n; i++){
        printf("Name: %s, Roll: %d\n", name[i], roll[i]);
    }
    return 0;
}