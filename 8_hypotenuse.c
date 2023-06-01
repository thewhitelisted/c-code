#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;

    printf("\nEnter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("\nSide C: %lf\n", C);

    return 0;
}