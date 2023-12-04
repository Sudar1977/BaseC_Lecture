#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int n = 5;
    int *p = malloc(n * sizeof(int)); // выделяем память для 5 чисел int
    if(p)
    {
        // помещаем значения счетчика в выделенную память
        for(int i = 0; i < n; i++)
            p[i] = i;
        // получаем значения из массива
        for(int i = 0; i < n; i++)
            printf("%d", p[i]);
    }
    free(p);
}
