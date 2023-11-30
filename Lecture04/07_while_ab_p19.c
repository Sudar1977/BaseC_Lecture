#include <stdio.h>

int main(void)
{
int a = 4, b = 6, counter=0;
    while (a < b)
    {
        a++;
        counter++;
    }
/*  while (a < b)
    {
        a+=b;
        counter++;
    }
    while (a > b)
    {
        a++;
        counter++;
    }
*/
    printf("a=%d,b=%d counter=%d",a,b,counter);
}
