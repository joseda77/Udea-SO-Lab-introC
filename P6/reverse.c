#include <math.h>
#include <stdio.h>

int reverse(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }
    return reversed;
}