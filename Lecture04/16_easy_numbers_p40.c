#include <stdio.h>
//( n - простое число, если n >= 2 и делится только на 1 и на себя)
int main()
{
 _Bool is_prime;
 int n;
    scanf("%u",&n);
    for(int i=2; i<n; i++)
    {
        is_prime=1;
        for(int j=2; j*j<=i; j++) // j <= i
            if (i%j == 0)
            {
                is_prime=0;
                break; //прервать внутренний цикл
            }
        if (is_prime)
            printf("%u ",i);
    }
    return 0;
}
