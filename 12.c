#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int month = 0;
    int day  = 0;
    int months31[] = {1, 3, 5, 7, 8, 10, 12};
    int months30[] = {4, 6, 9, 11};
    int current_year_day = 0;
    while (month < 1 || month > 12)
    {
        month = get_int("Введіть номер місяця: ");
    }
    for (int i = 0; i < 7; i++)
    {
        if (month == months31[i])
        {
            while (day < 1 || day > 31)
            {
                day = get_int("Введіть день: ");
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (month == months30[i])
        {
            while (day < 1 || day > 30)
            {
                day = get_int("Введіть день: ");
            }
        }
    }
    if (month == 2)
    {
        while (day < 1 || day > 28)
        {
            day = get_int("Введіть день: ");
        }
    }

    for (int i = 1; i < month; i++)
    {
        for (int k = 0; k < 7; k++)
        {
            if (i == months31[k])
            {
                current_year_day += 31;
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (i == months30[k])
            {
                current_year_day += 30;
            }
        }
        if (i == 2)
        {
            current_year_day += 28;
        }
    }
    int answer = 365 - (current_year_day + day);
    printf("До Нового року залишилось %i днів.\n", answer);
}