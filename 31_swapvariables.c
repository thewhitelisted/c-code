#include <stdio.h>
#include <string.h>

int main()
{
    // useful for sorting

    // CHAR SWAPPING

    /* char x = 'x';
    char y = 'y';
    char temp;

    temp = x;
    x = y;
    y = temp; */

    // STRING SWAPPING, MAKE SURE YOU DECLARE SIZE SO THERE ISN'T BUGGY BEHAVIOR
    char x[15] = "EX";
    char y[15] = "WHY";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}