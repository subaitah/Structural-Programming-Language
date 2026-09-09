#include<stdio.h>

int main(){
    int day; // 1=mon, 2= tues, 3= wed, 4= thurs, 5= fri, 6= sat, 7= sun
    printf("Enter your day (1-7):");
    scanf("%d", &day);

    switch(day){
        case 1: printf("mon \n");
        break;
        case 2: printf("tues \n");
        break;
        case 3: printf("wed \n");
        break;
        case 4: printf("thurs \n");
        break;
        case 5: printf("fri \n");
        break;
        case 6: printf("sat \n");
        break;
        case 7: printf("sun \n");
        break;
        default: printf("Invalid day \n");
    }
    return 0;
}