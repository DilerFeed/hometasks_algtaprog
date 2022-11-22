#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int biggest = 0;
    int small_index = 0;
    int nums[5];
    for (int i = 0; i < 2; i++)
    {
        nums[i] = get_int("Введіть число №%i: ", i + 1);
        if (nums[i] > biggest)
        {
            biggest = nums[i];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (biggest != nums[i])
        {
            small_index = i;
        }
    }
    printf("%i %i\n", nums[small_index], biggest);
}