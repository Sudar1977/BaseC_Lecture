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
// переменная i видна только внутри for
    for(int i = 0; i<5; i++)
    {
        sum += i;
    }
    printf("%d\n",i); // ошибка
    return 0;
}
*/
