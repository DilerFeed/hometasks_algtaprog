#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char *number = get_string("Введіть ціле число: ");

    for (int i = 0; i < strlen(number); i++)
    {
        if (number[i] == number[i + 1])
        {
            printf("В числі Є дві однакові цифри, що стоять рядом.\n");
            return 0;
        }
    }
    printf("В числі НЕМАЄ двох однакових цифр, що стоять рядом.\n");
    return 0;
}