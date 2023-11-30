#include <stdio.h>

void max (void)
{
 int a,b; //локальные переменные
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
}

/*int max (void)
{
 int a,b; // видны только внутри
    scanf("%d%d",&a,&b);
    if (a>b)
        return a;
    else
        return b;
}*/
