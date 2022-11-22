#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number1 = get_int("Введіть натуральне число 1: ");
    int number2 = get_int("Введіть натуральне число 2: ");
    int sum = 0;

    for (int i = number1; i <= number2; i++)
    {
        sum += pow(i, 2);
    }
    printf("Сума квадратів %i\n", sum);
}