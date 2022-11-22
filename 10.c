#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int month = get_int("Введіть номер місяця: ");
    if (month == 12 || month == 1 || month == 2)
    {
        printf("Зима\n");
    }
    else if (month >= 3 && month <= 5)
    {
        printf("Весна\n");
    }
    else if (month >= 6 && month <= 8)
    {
        printf("Літо\n");
    }
    else if (month >= 9 && month <= 11)
    {
        printf("Осінь\n");
    }
}