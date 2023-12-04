#include <stdio.h>

int main(void)
{
    long int n = 10;
    long int *ptr = &n;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
    ptr++;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
    ptr--;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
    return 0;
}
