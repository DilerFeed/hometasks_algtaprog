#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float S, a, z, b, c, c1, c2;
    S = 0; a = 1; z = 1; b = 2; c = 9; c1 = 3; c2 = 3;
    while (fabs(a) > 0.001)
    {
        S += a;
        a = b / c;
        b += 2;
        z = -z;
        c1 += 2;
        c2 *= 3;
        c = c1 * c2;
        printf("%f  ", a);
    }
    printf ("S = %.3f\n", S);
}