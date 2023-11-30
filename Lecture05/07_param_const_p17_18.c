#include <stdio.h>

void mult2(const int x)//имя параметра может быть а
{
    x = 2 * x;
    printf("mult2 func: x = %d \n", x);
}

int main()
{
 int x = 2;
    mult2(x);
}
