/*В прототипе функции можно не
указывать имена переменных, а
только типы — это сокращенная,
удобна для простых функций.*/

#include <stdio.h>

int max (int, int);

int main()
{
 int a,b;
    scanf("%d%d",&a,&b);
    printf("max = %d\n", max(a,b));
    return 0;
}

int max (int a, int b)
{
    if (a>b)
        return a;
    return b;
}
