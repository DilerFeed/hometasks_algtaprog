#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number = -1;
    int counter = 0;
    do {
        if (counter > 0)
        {
            printf("Необхідно додатнє число!\n");
        }
        number = get_int("Введіть число >= 0: ");
        counter++;
    }
    while (number < 0);

    int name = number;
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    if (sum == 10)
    {
        printf("Так, сума цифр числа %i дорівнює 10!\n", name);
    }
    else
    {
        printf("Ні, сума цифр числа %i НЕ дорівнює 10!\n", name);
    }
}