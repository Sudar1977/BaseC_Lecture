#include <stdio.h>

int main()
{
 int i, sum = 0;
    for(i = 0; i<5; i++)
    {
        sum += i;
    }
    printf("%d\n",i); // i = 5
    return 0;
}

/*
#include <stdio.h>

int main()
{
 int sum = 0;
 int i = 0;
    while(i<5)
    {
        sum += i;
        i++;
    }
    printf("%d\n",i); // 5
    return 0;
}
*/
