#include<stdio.h>

// This is a single line comment in C
int main()
{
    int sum;

    sum = 10 + 20;

    printf("Sum of 10 and 20 is: %d \n", sum); //%d is a format specifier

    return 0;
}

/*
int x;          //declaration
x = 123;        //initialization
int y = 321;    //declation and initialization

Types of Variables:
int x = 10;             // integer
float y = 11.5;         // floating point 
char z = 's';           // character
char name[] = "dmkl";   //array of characters (emulation of strings)

Format Specifiers:
%d - decimal/intergers
%f - floating point operations
%c - characters
%s - string

Printing to console:
printf("The value of the data is %fs", data)
    where '%fs' is format specifier stated above and 'data' is name of the variable
*/