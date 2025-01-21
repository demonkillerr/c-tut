// Variables and Data Types in C
#include<stdio.h>
#include<stdbool.h> // for using the boolean data type (see below)

// This is a single line comment in C
int main()
{
    int sum, sub, mul, div, mod;
    const int NUM1 = 10;
    const int NUM2 = 20;

    sum = NUM1 + NUM2;  // sum
    sub = NUM2 - NUM1;  // subtract
    mul = NUM1 * NUM2;  // multiply
    div = NUM2 / NUM1;  // divide
    mod = NUM2 % NUM1;  // modulo

    printf("Sum of 10 and 20 is: %d \n", sum);
    printf("Subtraction of 20 and 10 is: %d \n", sub); 
    printf("Multiplication of 10 and 20 is: %d \n", mul); 
    printf("Division of 20 and 10 is: %d \n", div);
    printf("Mod of 20 and 10 is: %d \n", mod);
    return 0;
}

/*
A] Compound Assignement Operators:
a += b; // Equivalent to a = a + b;
a -= b; // Equivalent to a = a - b;
a *= b; // Equivalent to a = a * b;
a /= b; // Equivalent to a = a / b;
a %= b; // Equivalent to a = a % b;
*/