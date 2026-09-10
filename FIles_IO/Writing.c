#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt", "w");
    fprintf(fptr, "%d\n", 10);
    fclose(fptr);
    fptr = fopen("Test.txt", "a");
    fprintf(fptr, "%d\n", 20);
    fclose(fptr);
    fptr = fopen("Test.txt", "a");
    fprintf(fptr, "%c\n", 'A');
    fputc('B', fptr);
    fclose(fptr);


    return 0;
}