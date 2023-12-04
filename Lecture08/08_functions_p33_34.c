#include <stdio.h>
#include <string.h>

int main(void)
{
    char dst[30] = "Hello ";
    char src[30] = "GB!!!";
    strcat(dst, src);
    printf("%s\n", dst); //Hello GB!!!
    strcpy(src,dst);
    printf("%s\n", src); //Hello GB!!!
    int n = strlen(src); // количество копируемых символов
    strncpy(dst, src, n-1);
//функция strncpy НЕ заканчивает скопированную строку нулевым символом,
//что может привести к переполнению буфера.
//Поэтому после копирования следует вручную устанавливать нулевой символ
    dst[n-1] = '\0';
    printf("%s %d\n", dst,n); //Hello GB!! 11
    char substr[14] = "GB!";
    char *substr_ptr = strstr(dst, substr);
    // если подстрока найдена
    if(substr_ptr)
    {
        // вычисляем позицию подстроки в строке
        long pos = substr_ptr - dst;
        printf("Substring index: %ld\n", pos); // Substring index: 6
    }
    else // если подстрока не найдена
    {
        printf("Substring not found\n");
    }
    return 0;
}
