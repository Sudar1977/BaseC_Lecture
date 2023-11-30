#include <stdio.h>

int main()
{
 char c;
    for(;;) //бесконечный цикл
    {
        printf( "\nPress any key, Q to quit: " );
        // Считываем введенные символ
        scanf("%c", &c);
        if (c == 'Q' || c == 'q')//Не важно Q или q
            break;
        printf("%x\n",c);//0x0a - перевод строки '\n'
    }
    return 0;
} // Выходим из бесконечного цикла, когда нажата Q или q
