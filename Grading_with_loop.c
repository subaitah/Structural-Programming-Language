#include<stdio.h>

// Tried grading students by taking n number of students' results and printing them altogether.
// Used array, loop and if else statement

int main(){
    int n;
    printf("Enter the number of students in the class:\n");
    scanf("%d", &n);
    int result[10];
    for(int i =0; i<n; i++){
        printf("Enter the result of student %d in the class:\n", i+1);
        scanf("%d", &result[i]);
    }
    for(int i =0; i<n; i++){
        if(result[i] >=0 && result[i] <=32){
            printf("The grade of student %d is: F\n",i+1);
        }
        else if(result[i] >=33 && result[i] <=50){
            printf("The grade of student %d is: D\n",i+1);
        }
        else if(result[i] >=51 && result[i] <=65){
            printf("The grade of student %d is: C\n",i+1);
        }
        else if(result[i] >=66 && result[i] <=80){
            printf("The grade of student %d is: B\n",i+1);
        }        
        else if(result[i] >=81 && result[i] <=90){
            printf("The grade of student %d is: A\n",i+1);
        }
        else if(result[i] >=91 && result[i] <=100){
        printf("The grade of student %d is: A+\n",i+1);
        }
        else{
            printf("Invalid result: %d\n", result[i]);
        }
    }
    return 0;
    }