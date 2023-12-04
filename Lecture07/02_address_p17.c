#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p;
    p = &x;
// При выводе адреса указателя функция printf() ожидает,
// что указатель будет представлять void*
// поэтому переданный указатель нужно преобразовать
// в указатель типа void *:
    printf("Address = %p \n", (void*) p);
    printf("x = %d \n", *p);
    return 0;
}
