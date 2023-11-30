#include <stdio.h>

int main(void)
{
 int i;
    for(i = 1; i < 5; i++)
    {
        if (i == 3)
            continue;
        printf("i = %d\n",i);
    }
    return 0;
}
