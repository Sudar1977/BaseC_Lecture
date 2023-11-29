#include <stdio.h>
int main()
{
    float a, b;
    printf("Solve a*x+b=0\n");
    printf("Enter a and b:\n");
    scanf("%f%f", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        printf("True for any x\n");
        else
        printf("No roots\n");
    }
    else
    printf("x = %5.5f\n", -b/a);
    return 0;
}
