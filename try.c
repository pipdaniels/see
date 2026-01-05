#include <stdio.h>

/*
    This block of code outputs different strings and tests out escape characters like new
    Line, tabs,
    Inverted comma and
    Double back slash
*/

int main()
{
    // This outputs Hello World
    printf("Hello World!\n");
    // This is a variable name that is a character type and holds the value String John
    char name[] = "John";
    // This outputs Say Hello to the value that is stored in the name variable and adds a tab
    printf("Say Hello to %s\t", name);
    // This outputs the Statement I am learning C! programming language and adds a new line
    printf("I am learning C!\n");
    // This outputs the String And it is awesome with a backslash at the end
    printf("And it is awesome!\n");
    // This outputs the String Have a good day, new line and Ciao on a new line
    printf("Have a good day!\nCiao\n");

    // Declaring a variable with a value assigned
    float height = 23.4;
    float weight = 44.5;
    int myNum = 34;
    printf("%f\n", height);
    printf("%d\n", myNum);

    height = 64.4;
    weight = height;

    printf("%f\n", weight);

    // Dclaring a variable without assigning a value
    char myGee = 'G';
    printf("%c\n", myGee);

    // Print a data without speecifying the variable
    printf("Hello this is my age: %d\n", 33);
    printf("Hi, It is so nice to meet you %c\n", 'John');
    printf("This is my Letter wrriting age: %f\n", 67.5);

    // Add two ints together
    int x = 7;
    int y = 5;
    int sum = x + y;
    printf("%d\n", sum);

    int i = 4, j = 4, k = 8;
    printf("%d\n", i + j + k);

    int e, f, g;
    e = f = g = 34;
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);

    int studentID = 005;
    int studentAge = 12;
    float studentFee = 674.6;
    double studentHeight = 5.7;
    char studentGrade[] = "A+";
    int studentActive = 1;

    // Example fo using 4e6
    float iheigth = 2e6;
    double ilength = 5E4;

    printf("Value of the Student ID; %i\n", studentID);
    printf("Value of the Student Age; %i\n", studentAge);
    printf("Value of the Student Fee; %f\n", studentFee);
    printf("Value of the Student Fee; %.1f\n", studentFee);
    printf("Value of the Student Fee; %.2f\n", studentFee);
    printf("Value of the Student Fee; %.3f\n", studentFee);
    printf("Value of the Student Height; %.4lf\n", studentHeight);
    printf("Value of the Student Grade; %s\n", studentGrade);
    printf("Value of the Student Active; %d\n", studentActive);

    // Create integer variables
    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length * width;

    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);
    printf("The memory size of Area int value is: %zu\n", sizeof(area));
    printf("The memory size of iheigth float value is: %zu\n", sizeof(iheigth));
    printf("The memory size of ilength double value is: %zu\n", sizeof(ilength));

    /*
    int is 2 to 4 bytes in size
    float is 4 bytes in size
    double is twice of float size i.e 8 bytes in size
    char is 1 byte in size

    The memory size reffers to how much space a type occupies in the computer's memory
    */

    // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %c%.2f\n", currency, cost_per_item);
    printf("Total cost = %c%.2f\n", currency, total_cost);

    int normalInt = 1000;       // standard int
    double normalDouble = 3.14; // standard double

    short int small = -100;                              // smaller int
    unsigned int count = 25;                             // only positive int
    long int big = 1234567890;                           // larger int
    long long int veryBig = 9223372036854775807;         // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L;         // extended precision

    printf("Normal int: %d\n", normalInt);        // print the value in the normalInt variable
    printf("Normal double: %lf\n", normalDouble); // print normalDouble value
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    // This lines prints the Sizes of the arg passed in the sizeof() functions
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // This returns the code 0 for success
    return 0;
}
