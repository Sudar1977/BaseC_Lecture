#include <stdio.h>

int main(void)
{
int a = 1, counter=0,b=2;
    for(int i = 1; i < 4; i++)
    {
        a++;
        counter++;
    }
/*  for(int i = 1; i < 4; i++)
    {
        a=a+i;
        counter++;
    }
    for(int i = 3; i >= 1; i--)
    {
        a+=b;
        counter++;
    }
*/
    printf("a=%d,b=%d counter=%d",a,b,counter);
    return 0;
}
