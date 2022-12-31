#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float array[5];
    float sum = 0, average;
    for (int i = 0; i < 5; i++)
    {
        array[i] = get_float("Введіть число масиву №%i: ", i+1);
        sum += array[i];
    }
    average = sum / 5;
    printf("Середнє арифметичне %0.3f\n", average);
}