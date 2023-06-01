#include <stdio.h>
#include <string.h> // for removing newline character at end of fgets

int main()
{
    char name[25]; // limit of 25 bytes
    int age;

    printf("\nWhats your name?\n");
    // scanf("%s", &name); // reads up to any whitespace
    fgets(name, 25, stdin);        // format (var, size, stdin)... includes a newline char at end
    name[strlen(name) - 1] = '\0'; // removes the newline character

    printf("How old are you?\n");
    scanf("%d", &age); // address of operator

    printf("Hello %s, How are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}