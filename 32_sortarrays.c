#include <stdio.h>

void sort(int array[], int size);
void print_array(int array[], int size);

int main()
{
    int array[] = {8,
                   1,
                   2,
                   7,
                   4,
                   3,
                   5,
                   9};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    print_array(array, size);

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[size - 1]);
}