#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';       // Single character: %c
    char b[] = "Chris"; // Array of characters: %s

    float c = 3.141592;           // 4 bytes, 32 bits of precision, 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes, 64 bits of precision, 15-16 digits %lf

    bool e = true; // 1 byte, true(1) or false(0) %d... requires <stdbool.h>

    char f = 100;          // 1 byte, (-128 to +127) %d (number) or %c (uses ASCII table)
    unsigned char g = 255; // 1 byte (0 to 255) %d (number) or %c (uses ASCII table) UNSIGNED = ONLY POSITIVE

    // NO NEED TO PUT INT, YOU CAN JUST PUT SHORT
    short int h = 32767;          // 2 bytes (-32,768 to +32,768) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,536) %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,648) %d
    unsigned int k = 4294967294; // 4 bytes (0 to 4,294,967,296) %u

    long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to 18 quintillion) %llu (add u to remove warning)

    /*
    NOTES:
    %.1 = DECIMAL PRECISION
    %1 = MINIMUM FIELD WIDTH
    %- = LEFT ALIGN
    */
   
    // example:
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1); // 8 minimum spaces left aligned
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    return 0;
}