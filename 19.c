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
    int counter = 0;

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
        counter++;
    }
    if (number1 == 0)
    {
        printf("НСД(%i, %i) = %i. Число кроків: %i.\n", num1_c, num2_c, number2, counter);
    }
    if (number2 == 0)
    {
        printf("НСД(%i, %i) = %i. Число кроків: %i.\n", num1_c, num2_c, number1, counter);
    }
}

/*
Звідси результати для таблички завдання 19:
1) 1234, Число кроків: 4.
2) 1111, Число кроків: 6.
3) 171,  Число кроків: 13.
4) 3421, Число кроків: 8.
5) 17,   Число кроків: 14.
*/