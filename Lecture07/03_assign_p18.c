#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;
    int y = *p; // присваиваем переменной y значение по адресу из указателя p
    printf("x = %d \n", y); // 10
    return 0;
}
