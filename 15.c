#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number = get_int("Введіть ціле число: ");
    int name = number;
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    printf("Сума цифр числа %i дорівнює %i.\n", name, sum);
}