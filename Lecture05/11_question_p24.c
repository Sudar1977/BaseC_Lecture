#include <stdio.h>

int y = 1;

int f(int a)
{
 static int x = 3;
    x += y;
    return x + a + y;
}

int main(void)
{
 int n = 10;
    y++;
    printf("Answer = %d\n", f(n));
    printf("Answer = %d\n", f(n));
}
