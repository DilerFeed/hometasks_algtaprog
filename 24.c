#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int array[10];
    int max1 = 0, max2 = 0, pos1 = 0, pos2 = 0;
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 21 - 10;
        printf("%i\n", array[i]);
        if (array[i] > max1)
        {
            max1 = array[i];
            pos1 = i;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if (array[j] > max2 && array[j] != max1)
        {
            max2 = array[j];
            pos2 = j;
        }
    }
    printf("Максимальні a[%i]=%i, a[%i]=%i\n", pos1, max1, pos2, max2);
}