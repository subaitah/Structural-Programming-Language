#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student_Info.txt", "w");
    char name[50];
    int age;
    float gpa;
    printf("Enter student's name: \n");
    scanf("%[^\n]s", name);
    printf("Enter student's age: \n");
    scanf("%d", &age);
    printf("Enter student's GPA: \n");
    scanf("%f", &gpa);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "GPA: %.2f\n", gpa);
    fclose(fptr);
    fptr = fopen("Student_Info.txt", "r");
    char ch = fgetc(fptr);
    while(ch!= EOF){
        printf("%c", ch);
        ch =fgetc(fptr);
    }
    return 0;
}