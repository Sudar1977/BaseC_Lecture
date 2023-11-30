#include <stdio.h>

void mult2(int x)//имя параметра может быть а
{
    x = 2 * x;
    printf("mult2 func: x = %d \n", x);
}
int main(void)
{
    int a = 35;
    mult2(a);//параметр не изменится
    printf("main func: a = %d \n", a);//a = 35
}
