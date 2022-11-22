#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number1 = get_int("Введіть ціле число 1: ");
    int num1_c = number1;
    int number2 = get_int("Введіть ціле число 2: ");
    int num2_c = number2;

    while (number1 != number2)
    {
        if (number1 > number2)
        {
            number1 -= number2;
        }
        else
        {
            number2 -= number1;
        }
    }

    printf("НСД(%i, %i) = %i\n", num1_c, num2_c, number1);
}