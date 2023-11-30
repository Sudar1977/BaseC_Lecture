#include <stdio.h>
//Итерационный способ:
int sumIter(int num)
{
int sum = 0;
    while(num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
//Рекурсивный способ:
int sumRec(int num)
{
    if (num > 0)
        return num%10 + sumRec(num/10);
    else
        return 0;
}
int main()
{
 int n;
    scanf("%d",&n);
    printf("sumIter = %d\n",sumIter(n));
    printf("sumRec = %d\n", sumRec(n));
    return 0;
}
