#include<stdio.h>
#include<ctype.h>

// W3 school first 10 problems are solved here
// Used loop, arrays and if else statement

int main(){

    // Q1 : Read a name from input and print a greeting.

    char name[100];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Hello, %s.\nWelcome to Programming World!\n", name);

    // Q2 : Convert a temperature from Celsius to Fahrenheit.

    float n;
    printf("Enter the temperature in Celsius scale: \n");
    scanf("%f",&n);
    printf("Temperature in Fahrenheit scale: %.2f\n", (n*9/5)+32);

    // Q3 : Check if a number is even or odd.

    int m;
    printf("Enter your number: \n");
    scanf("%d", &m);
    if(m % 2==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }

    // Q4 : Create a username and initials from a first and last name.

    char firstname[50];
    char lastname[50];
    printf("Enter your first name: \n");
    scanf("%s", firstname);
    printf("Enter your last name: \n");
    scanf("%s", lastname);
    printf("Your initials are: %c and %c \n", firstname[0], lastname[0]);
    for(int i=0; firstname[i]!='\0'; i++){
        firstname[i]= tolower(firstname[i]);
    }
    for(int i=0; lastname[i]!='\0'; i++){
        lastname[i]= tolower(lastname[i]);
    }
    printf("Your username is %s%s \n", firstname, lastname);

    // Q5 : Determine if a person is old enough to vote.

    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    if(age>=18){
        printf("Congratulations!! You have the right to vote.\n");
    }
    else{
        printf("You do not have the right to vote yet. Grow up!!\n");
    }

    // Q6 : Convert a score into a letter grade.

    int marks;
    printf("Enter your marks: \n");
    scanf(" %d", &marks);
    if(marks >=0 && marks <=32){
        printf("Your Grade is F\n");
    }
    else if(marks >=33 && marks <=50){
        printf("Your Grade is D\n");
    }
    else if(marks >=51 && marks <=65){
        printf("Your Grade is C\n");
    }
    else if(marks >=66 && marks <=80){
        printf("Your Grade is B\n");
    }
    else if(marks >=81 && marks <=90){
        printf("Your Grade is A\n");
    }
    else if(marks >=91 && marks <=100){
        printf("Your Grade is A+\n");
    }
    else{
        printf("Invalid marks");
    }

    // Q7 : Print the multiplication table for a given number.

    int a;
    printf("Enter the number: \n");
    scanf("%d", &a);
    printf("The multiplication table of %d is: \n", a);
    for(int i=1; i<=10; i++){
        printf("%d\n", a*i);
    }

    // Q8 : Take a number to calculate the factorial of that number.

    int num, f=1;
    printf("Enter number: \n");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++){
        f *= i;
    }
    printf("The factorial of the number %d is %d\n", num, f);

    // Q9 : Read a list of numbers and calculate their sum.

    int x;
    printf("The summation of how many numbers would you like to make: \n");
    scanf("%d", &x);
    int numbers[x];
    printf("Enter the numbers of sum you want: \n");
    for(int i=0; i<x; i++){
        scanf("%d", &numbers[i]);
    }
    int sum=0;
    for(int i=0; i<x; i++){
        sum += numbers[i];
    }
    printf("The summation is: %d\n", sum);

    // Q10 : Calculate the area of a rectangle, triangle and circle.

    int length, breadth;
    float base, height;
    int radius;
    float pi = 3.14;
    printf("Enter the values of length and breadth: \n");
    scanf("%d %d", &length, &breadth);
    printf("Enter the values of base and height: \n");
    scanf("%f %f", &base, &height);
    printf("Enter the value of radius: \n");
    scanf("%d", &radius);
    printf("Area of rectangle is : %d\n", length*breadth);
    printf("Area of triangle is : %f\n", 0.5*base*height);
    printf("Area of circle is : %f\n", pi*radius*radius);

    return 0;
}