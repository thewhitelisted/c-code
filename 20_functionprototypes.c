#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{
    // Function prototype = Function declaration w/o a body, before main()
    //                      Ensures that calls to a function are made with
    //                      the correct arguements

    // if the parameters aren't fitting the required, will not compile

    // ADVANTAGES
    // 1. Easier to navigate with main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files
    
    char name[] = "Chris";
    int age = 16;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}