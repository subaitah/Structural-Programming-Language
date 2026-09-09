#include<stdio.h>

void printHello();
char function();
int main(){
    printHello();
    char user1='A';
    char user2='B';
    printf("Enter user1 nationality");
    scanf(" %c", &user1);
    printf("Enter user2 nationality");
    scanf(" %c", &user2);
    function(user1,user2);
    return 0;
    }
void printHello(){
    printf("Hello World \n");
}
char function(char user1,char user2){
    char F = 'F';
    char I='I';
    if (user1==F && user2==I){
        printf("Bonjour to user1 and Namaste to user2");
    }
        else{
            printf("Bonjour to user2 and Namaste to user1");
        }
    return 0;
}