#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("The number is: %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("The number is: %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("The number is: %d\n", num);
    fclose(fptr);
    fptr = fopen("Test.txt", "r");
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    fclose(fptr);
    return 0;
}