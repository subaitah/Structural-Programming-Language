#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");
    int a,b,c;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fscanf(fptr, "%d", &c);
    fclose(fptr);
    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a+b+c);
    fclose(fptr);
    return 0;
}

    