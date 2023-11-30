#include <stdio.h>

int my_pow(int, int); // описание прототипа my_pow
double calc(int x, int n)
{
    return (double)my_pow(x, n) / n;
// вызов функции pow
}
int my_pow(int x, int n)
{
    if (n == 1)
        return x;
    return x*calc(x, n - 1); // вызов функции calc
}
int main()
{
 int n, x;
    printf("n = ");
    scanf("%d",&n);
    printf("x = ");
    scanf("%d",&x);
 double a = calc(x, n); // вызов рекурсивной функции
    printf("%lf",a);
    return 0;
}
