#include<stdio.h>

int main(){
    // C.Home
    printf("Hello World!\n");
    // C.Intro
    char name[] = "Subaitah";
    printf("Hello %s\n", name);
    // C.Get Started
    printf("Hello World!\n");
    // C.Syntax
    printf("Have a good day!\n");
    printf("Hello.C\n");
    // C.Output
    printf("This sentence will work!\n");
    printf("Hello World!\n");
    printf("I am learning C.\n");
    printf("And it is awesome!\n");
    // C.Comments
    printf("Hello World!\n"); // This is a comment
    /*
    This is a multi-line comment
     */
    // C. Variables
    int myNum;
    myNum = 23;
    float myFloatNum = 2.32;   
    char myLetter = 'S';       
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My favorite number is: %d\n", myNum);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);
    printf("My favorite number is: %d\n", 23);
    printf("My favorite letter is: %c\n", 'S');

    int myOtherNum; 
    myOtherNum = myNum;
    printf("%d\n", myOtherNum);

    int x = 4;
    int y = 2;
    int sum = x + y;
    printf("%d\n", sum);

    int x, y, z;
    x = y = z = 22;
    printf("%d\n", x + y + z);

    int studentID = 41;
    int studentAge = 21;
    float studentFee = 100.25;
    char studentGrade = 'A';
    printf("Student ID: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);

    int length = 9;
    int width = 8;
    int area;
    area = length * width;
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);

    // C.Data Types
    char myText = 'Hello everyone!';
    printf("%c\n", myText);
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    float f1 = 35e3;   
    double d1 = 12E4;  

    printf("%f\n", f1);
    printf("%lf\n", d1);

    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);

    printf("%zu\n", sizeof(myNum));
    printf("%zu\n", sizeof(myFloatNum));
    printf("%zu\n", sizeof(d1));
    printf("%zu\n", sizeof(myLetter));

    int items = 10;
    float cost_per_item = 10.9;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    int normalInt = 1000;                       // standard int 
    double normalDouble = 3.14;                 // standard double

    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // C Type Conversion

    int maxvalue = 123;
    int minvalue = 223;
    float percentage = (float) minvalue / maxvalue * 100.0;
    printf("User's percentage is %.2f", percentage);

    const int birthyear = 2005;
    int x = 5;

    ++x;
    printf("%d\n", x);
    --x;
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
    x--;
    printf("%d\n", x);

    int Present = 1;
    int Absent = 0;

    printf("Student present: %d\n", Present && !Absent);
    printf("Absent: %d\n", !Present);

    char name1 = 'Rahmin';
    char name2 = 'Subaitah';

bool isGreater = name2 > name1;

printf("%c", isGreater);


    return 0;
}