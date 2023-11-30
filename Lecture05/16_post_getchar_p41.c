#include <stdio.h>

int main ()
{
    char character;
//puts - функция вывода строки
    int status = puts("Enter the symbol, '.'is exit:");
//В случае успеха, возвращается неотрицательное значение.
//В случае ошибки — EOF.
    do
    {
        character = getchar(); // считать введённый со стандартного потока ввода символ
        status = putchar (character); // вывести этот символ
    } while (character != '.'); // пока введенный символ не точка
    return 0;
}
