#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("odd_numbers.txt", "w");
    int n;
    printf("Enter a value: \n");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        if(i%2 !=0){
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    fptr = fopen("odd_numbers.txt", "r");
    char ch =fgetc(fptr);
    while(ch!= EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
