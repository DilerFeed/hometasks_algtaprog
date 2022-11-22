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

    while (number1 != 0 && number2 != 0)
    {
        if (number1 > number2)
        {
            number1 %= number2;
        }
        else
        {
            number2 %= number1;
        }
    }
    if (number1 == 0)
    {
        printf("НСД(%i, %i) = %i\n", num1_c, num2_c, number2);
    }
    if (number2 == 0)
    {
        printf("НСД(%i, %i) = %i\n", num1_c, num2_c, number1);
    }
}

/*
Звідси результати для таблички завдання 18:
1) 1234
2) 1111
3) 171
4) 3421
5) 17
*/