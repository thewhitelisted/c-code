#include <stdio.h>

int main()
{
    int x;       // declare
    x = 123;     // initialization
    int y = 321; // both

    int age = 16;
    float gpa = 3.5;         // decimal numbers
    char letter_grade = 'A'; // single characterF
    char name[] = "Chris";   // strings are arrays of characters

    printf("Hello %s\n", name);                         // %s to indicate string
    printf("You are %d years old\n", age);              // %i to indicate integer
    printf("Your average grade is %c\n", letter_grade); // %c to indicate character
    printf("Your gpa is %.2f\n", gpa);                 // %lf to indicate floating point number

    return 0;
}