#include <stdio.h>

void dec_to_bin(int n)
{
    if (n >= 2)
        dec_to_bin(n / 2);
    printf("%d", n % 2);
}
int main()
{
 int n;
    printf("n -> ");
    scanf("%d",&n);
    printf("Bin = ");
    dec_to_bin(n);
    return 0;
}
