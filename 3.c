#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    float first_num = get_int("Введіть перше число: ");
    float second_num = get_int("Введіть друге число: ");
    float third_num = get_int("Введіть третє число: ");
    float sum = first_num + second_num + third_num;
    printf("%0.f+%0.f+%0.f=%0.f\n", first_num, second_num, third_num, sum);
}