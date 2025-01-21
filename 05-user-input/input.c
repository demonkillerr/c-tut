// User input in C
#include<stdio.h>
#include<stdbool.h> // for using the boolean data type (see below)

// This is a single line comment in C
int main()
{
    char name[25];
    int age;
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old \n", age);

    return 0;
}

/*

*/