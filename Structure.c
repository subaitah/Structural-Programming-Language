#include<stdio.h>

int main(){
    int n =5;
    struct student {
        int roll;
        float GPA;
    };
    struct student str[6];
    for( int i = 1; i<=n; i++){
        printf("Enter student %d info:\n",i);
        printf("Enter student's roll:\n");
        scanf("%d", &str[i].roll);
        printf("Enter student's GPA:\n");
        scanf("%f", &str[i].GPA);
    }
    for(int i = 1; i<=n; i++){
        printf("Show info of student %d\n", i);
        printf("Roll: %d, GPA: %f\n", str[i].roll, str[i].GPA);
    }
    return 0;
}