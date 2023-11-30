#include <stdio.h>

unsigned int factorial(unsigned int n)
{
 unsigned int fact = 1;
    for(int i = 2;i <= n;i++)
        fact *= i;
    return fact;
}
