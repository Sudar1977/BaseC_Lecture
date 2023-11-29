#include <stdio.h>

int main ()
{
    const float LENGTH = 10.f; //Литерал с плавающей точкой
    const int WIDTH = 0xFFU; //Ширина задана в HEX-формате без знака = 255
    const char NEWLINE = '\n';
    const char STR[] = "value of area : " \
                       "%f";
    float area;

    area = LENGTH * WIDTH;
    printf (STR, area);
    printf ("%c", NEWLINE);
    return 0;
}
