#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Chris";
    char string2[] = "Lee";

    strlwr(string1);              // sets the string to lowercase
    strupr(string1);              // sets the string to uppercase
    strcat(string1, string2);     // concatenates/appends str2 to str1
    strncat(string1, string2, 1); // same thing as strcat but appends n characters
    strcpy(string1, string2);     // copy string2 to string1
    strncpy(string1, string2, 2); // copy n amount of characters from string2 to string1... Chris --> Leris

    strset(string1, '?');     // sets all characters in a string to a given char
    strnset(string1, 'x', 1); // sets the first n characters of a string to a given char
    strrev(string1);          // reverses a string

    int result = strlen(string1);           // returns length of a string as int
    result = strcmp(string1, string2);      // string compare all characters... returns 0 for same, 1 for diff
    result = strncmp(string1, string2, 2);  // string compare n characters
    result = strcmpi(string1, string2);     // string compare all (ignore case)
    result = strnicmp(string1, string2, 2); // string compare n char (ignore case)

    return 0;
}