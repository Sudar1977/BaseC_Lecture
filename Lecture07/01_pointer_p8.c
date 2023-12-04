#include <stdio.h>

int main(void)
{
    int x = 10; // определяем переменную
    int *p_x; // определяем указатель
    p_x = &x; // указатель получает адрес переменной
    printf("%p \n", p_x); // 0060FEA8, например
    return 0;
}
