#include <stdio.h>
int main(void)
{
    for (int i = 1; i < 101; i++)
    {
        printf("%05d ", i*i);
        if(i%10==0)
            printf("\n");
    }
    return 0;
}
