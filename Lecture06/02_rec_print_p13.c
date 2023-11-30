#include <stdio.h>

void Rec(int n) {
    if(n > 0)
        Rec(n - 1);
    printf("%5d",n);
}

int main(void)
{
    Rec(4);
    return 0;
}
