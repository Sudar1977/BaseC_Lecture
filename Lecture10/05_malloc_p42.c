#include <stdio.h>
#include <stdlib.h> // прототип функции malloc

int main(void)
{
    int *p = malloc(sizeof(int)); // выделяем память равную int
    if(p != NULL)
    {
        *p = 55; // записываем значение 55 в выделенную память
        printf("%d \n", *p);//с помощью операции разыменования получаем значение
    }
    free(p);//ptr = NULL;
}
