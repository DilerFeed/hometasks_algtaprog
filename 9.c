#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int nums[3];
    for (int i = 0; i < 3; i++)
    {
        nums[i] = get_int("Введіть число №%i: ", i + 1);
    }
    if (nums[0] < nums[1] && nums[1] < nums[2])
    {
        printf("Числа введено у порядку зростання.\n");
    }
    else
    {
        printf("Числа введено НЕ у порядку зростання.\n");
    }
}