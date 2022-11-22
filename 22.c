#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int number = get_int("Введіть натуральне число: ");
    printf("Відповідь: ");
    while (number > 0)
    {
        printf("%i ", number);
        number -= 2;
    }
    printf("\n");
}