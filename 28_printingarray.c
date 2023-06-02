#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) // sizeof returns bytes, div by any index of
    {                                                            // the array to get the size of the array
        printf("%.2lf\n", prices[i]);
    }

    return 0;
}