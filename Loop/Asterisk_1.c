#include<stdio.h>

int main(){
    int row=3;
    int col=4;
    char s = '*';
    for(int i=1; i<=row; i++){
        for(int j=1; j<col; j++){
            printf("%c", s);
        }
        printf("%c\n", s);
        col--;
    }
    
    // Tried solving it another way.

    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}