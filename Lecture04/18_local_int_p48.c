#include <stdio.h>
/*Глобальная переменная. Видна внутри всего файла.*/
int a=5;

int main()
{
    /*Локальная переменная видна только внутри main. */
int a=10;
    printf("a = %d",a);
    return 0;
}