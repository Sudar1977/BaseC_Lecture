#include <stdio.h>

void Rec(int n) {
    printf("%5d",n);
    if(n > 0)
        Rec(n - 1);
}
int main(void)
{
    Rec(4);
    return 0;
}
