#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHAPPY BIRTHDAY DEAR %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main()
{
    char name[] = "Chris";
    int age = 16;

    birthday(name, age);

    return 0;
}