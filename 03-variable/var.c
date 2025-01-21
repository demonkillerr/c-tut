// Variables and Data Types in C
#include<stdio.h>
#include<stdbool.h> // for using the boolean data type (see below)

// This is a single line comment in C
int main()
{
    int sum;

    sum = 10 + 20;

    printf("Sum of 10 and 20 is: %d \n", sum); //%d is a format specifier

    int x = 50;             // integer
    float y = 20.1256;      // floating point 
    char z = 'c';           // character
    char name[] = "dmkl";   // string

    printf("The result upto two decimal places is: %0.2f \n", y);
    printf("The lucky-draw result is letter: %c \n", z);
    printf("The name is %s \n", name);

    return 0;
}

/*
A] Variable Init
int x;          //declaration
x = 123;        //initialization
int y = 321;    //declation and initialization

B] Data Types:
int x = 10;             // integer
float y = 11.5;         // floating point 
char z = 's';           // character
char name[] = "dmkl";   // array of characters (emulation of strings)
bool a = 'True';        // boolean (i.e true or false)

Types of int based on data range
short - int value is small (can be negetive or positive)
unsigned short - int value is small but only positive
unsigned int - regular int but only has positive values
long long int - super long int (quintillion; can be positive or negetive)
unsigned long long int - super long int but only positive

C] Format Specifiers:
%d - decimal/intergers
%f - floating point operations
    %0.nf - for displaying the number upto n decimal places (i.e %0.2f for displaying upto 2 decimal places)
%c - characters
%s - string

D] Printing to console:
printf("The value of the data is %fs", data)
    where '%fs' is format specifier stated above and 'data' is name of the variable
*/