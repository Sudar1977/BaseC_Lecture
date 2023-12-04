#include <stdio.h>

enum operation // арифметическая операция
{
    ADD = 1, // сложение
    SUB = 2, // вычитание
    MUL = 4 // умножение
};

int calculate(int x, int y, enum operation op)
{
    switch(op)
    {
        case ADD: return x + y;
        case SUB: return x - y;
        case MUL: return x * y;
        default: return 0;
    }
}

int main(void)
{
    enum operation op = MUL;
    int result = calculate(5, 6, op);
    printf("Result: %d\n", result);
// Result: 30
    result = calculate(7, 8, ADD);
    printf("Result: %d\n", result);
// Result: 15
    result = calculate(4, 3, SUB);
    printf("Result: %d\n", result);
// Result: 1
    return 0;
}
