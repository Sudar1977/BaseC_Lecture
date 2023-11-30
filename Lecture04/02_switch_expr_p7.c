#include <stdio.h>
int main ()
{
int a = 1, b = 1, expr = 2;
    switch (expr)
    {
        case 2:
            a *= 2; // Если expr == 2, то выполнится a += 5; из следующей ветки
        case 3:
            a += 5;
        break; // А здесь произойдет выход
        case 4:
            a -= b;
        break;
        default:
        break;
    }
    printf ("a = %d", a);
    return 0;
}
