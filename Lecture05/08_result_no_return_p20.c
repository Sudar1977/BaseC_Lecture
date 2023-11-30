#include <stdio.h>

void max (int a, int b)
{
    if (a > b)
    {
        printf("max = %d\n",a);
        return;
    }
    printf("%d\n",b);
    //return; подразумевается
}

int main()
{
 int a,b;
    scanf("%d%d",&a,&b);
    max(a,b);
    return 0;
}
