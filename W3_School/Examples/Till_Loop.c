#include<stdio.h>
#include<stdbool.h>

int main(){
    // if-else statement

    int time = 24;

    bool night = time < 5 && time > 20;
    bool isDay = time > 5 && time < 16;

    if (night) {
        printf("Good night.\n");
    } else if (isDay) {
        printf("Good day.\n");
    }

    (time > 5 && time < 16) ? printf("Good day.") : printf("Good night.");

    int age = 20;
    bool Citizen = true;

    if (age >= 18) {
        printf("Old enough to vote.\n");

        if (Citizen) {
            printf("And you are a citizen, so you can vote!\n");
        } 
        else {
            printf("But you must be a citizen to vote.\n");
        } 
    } 
    else {
        printf("Not old enough to vote.\n");
    }

    if (!(age < 18)) {
        printf("Old enough to vote.\n");
    }
    else {
        printf("Not old enough to vote.\n");
    }

    int temperature = 30;

    if (temperature < 0) {
        printf("It's freezing!\n");
    } 
    else if (temperature < 20) {
        printf("It's cool.\n");
    } 
    else {
        printf("It's warm.\n");
    }

    // Switch statement

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

    int choice = 2;

    // 1 = Breakfast
    // 2 = Dinner

    switch (choice) {
        case 1:
            printf("You ordered Breakfast");
            break;

        case 2:
            printf("You ordered Dinner");
            break;

        default:
            printf("Invalid choice");
    }

    // C.While Loop

    int i = 10;

    do {
        printf("i is %d\n", i);
        i++;
    } while (i < 5); /* It'll print only once*/
    
    int number;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number > 0);

    int dice = 1;

    while (dice <= 6) {
    if (dice < 6) {
        printf("No Chokka\n");
    } 
    else {
        printf("Chokka!\n");
    }
    dice++;
    }

    // C. For Loop

    int i;
    for (i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }
    int sum = 0;
    int i;
    for (i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    printf("Sum is %d", sum);

    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
    printf("\n");
    }
    int number = 3;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}