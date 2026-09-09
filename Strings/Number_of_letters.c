#include<stdio.h>

int main(){

    int n;
    char name[100];
    printf("Enter your college name: \n");
    scanf("%[^\n]", name);
    printf("%s\n", name);
    n = sizeof(name);
    char c = 'i';
    int count=0;
    for(int i=0; i<n; i++){
        if(c==name[i]){
            printf("%c\n", c);
            count++;
        }
    }
    printf("Thus, total i's are %d\n", count);
    
    return 0;
    
}