#include <stdio.h>
int main(void)
{
int a = 4, b = 6, counter=0;
    do
    {
        a++;
        counter++;
    }
    while (a < b); // Ставим точку с запятой в конце
    printf("a=%d,b=%d counter=%d",a,b,counter);
    return 0;
}
