#include <stdio.h>

int main()
{
    // assume we're making a credit card sign up program

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    /* comparison operators
    equals: ==
    greater than: >
    less than: <
    greater than or equal to: >=
    less than or equal to: <=
    not equals: != */

    if (age >= 18)
    {
        printf("You are now signed up!\n");
    }
    else if (age == 0) 
    {
        printf("You can't sign up! You were just born!\n");
    }
    else if (age < 0) 
    {
        printf("You haven't been born yet!\n");
    }
    else
    {
        printf("You are too young to sign up!\n");
    }

    return 0;
}