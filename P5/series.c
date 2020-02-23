#include <stdio.h>
#include <math.h>

float factorial(int number)
{
    float fact = 1;
    for (int i = 1; i <= number; ++i)
    {
        fact *= i;
    }
    return fact;
}

float series(double x, double n)
{
    float acum = 0;

    for (int i = 0; i < n; i++)
    {
        acum += pow(-1, i) * pow(x, i * 2) / factorial(i * 2);
    }
    return acum;
}
