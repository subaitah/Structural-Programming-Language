#include<stdio.h>

int main(){
    char ch= '*';
    int row =4;
    int col = 5;
    char space = ' ';
    for( int i=0; i<row; i++){
        
        for(int j=0;j<i; j++){
            printf("%c", space);
        }
        for( int j=0; j<col; j++){
            printf("%c", ch);
        }
        printf("\n");
        col--;
        
        
    }
    return 0;
}