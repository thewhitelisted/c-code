#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            // continue; // will skip 13
            break; // will skip the rest of loop
        }
        printf("%d\n", i);
    }

    return 0;
}