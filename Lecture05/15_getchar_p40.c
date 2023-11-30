#include <stdio.h>
int main()
{
    char c;
//(c = getchar()) это не сравнение
//а считывание символа с консоли
//сравнение здесь != '.'
    while( (c = getchar()) != '.')
    putchar(c);
    return 0;
}
