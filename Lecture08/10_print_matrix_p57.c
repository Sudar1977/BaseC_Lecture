/* сравнение двух целых V1 */
#include <stdio.h>
#include <stdlib.h>

int comparator (const int *a, const int *b)
{
    return *a - *b;
}

int main(void)
{
    int a[3] = {3,1,2};
    qsort(a, 3, sizeof (int), (int(*) (const void *, const void *)) comparator);
    printf("%d,%d,%d",a[0],a[1],a[2]);
    return 0;
}
