#include <stdio.h> //Для printf()
#include <stdlib.h > //Для atoi()

int main (void)
{
    char *Str = "652.2345brrt 7";
    //Строка для преобразования
    char *ptr=Str;
    //Преобразование строки в число типа int
    int Num = atoi (Str);
    //Вывод результата преобразования
    printf ("%d\n",Num);
    float Num1 = atof (Str);
    //Вывод результата преобразования
    printf ("%f\n",Num1);
    ptr+=13;
    int Num3 = atoi (ptr);
    //Вывод результата преобразования
    printf ("%d\n",Num3);
    return 0;
}
