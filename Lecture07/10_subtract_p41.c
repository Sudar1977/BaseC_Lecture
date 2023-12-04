#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 23;
    int *pa = &a;
    int *pb = &b;
    int c = pa - pb; // разница между адресами
    printf("pa=%p \n", (void*)pa);
    printf("pb=%p \n", (void*)pb);
    printf("c=%d \n", c);
    return 0;
}
