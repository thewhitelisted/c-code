#include <stdio.h>
#include <string.h>

int main()
{
    // 2D array of characters
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla" IS NOT VALID, USE strcpy()
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}