#include<stdio.h>

int main(){
    int row=3;
    int col=4;
    char s = '*';
    char space = ' ';

    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf("%c", space);
            if(i==j){
                printf("%c",s);
            }
        }
        printf("\n");
    }
    return 0;
}