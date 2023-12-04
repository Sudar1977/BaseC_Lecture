#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;
    *p = 45;
    printf("x = %d \n", x); // 45
    return 0;
}
