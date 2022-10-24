#include <cs50.h>
#include <stdio.h>
// Іщенко Гліб, 6КН-22б
int main(void)
{
    int numbers = get_int("Введіть три числа (без пробілов): ");
    int number1 = numbers % 10;
    int number2 = (numbers / 10) % 10;
    int number3 = numbers / 100;
    float sum = number1 + number2 + number3;
    int mult = number1 * number2 * number3;
    float average = sum / 3;
    printf("%i+%i+%i=%.0f\n", number3, number2, number1, sum);
    printf("%i*%i*%i=%i\n", number3, number2, number1, mult);
    printf("(%i+%i+%i)/3=%.1f\n", number3, number2, number1, average);
}