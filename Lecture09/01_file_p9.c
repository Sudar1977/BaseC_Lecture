#include <stdio.h>

int main(void)
{
 FILE *f;
    f = fopen("in.txt","w"); // открытие файла in.txt на запись
    fclose(f);  //Закрытие файла. После окончания работы с файлом
                //необходимо убедиться, что все записанные данные попали на диск, и
                //освободить все ресурсы, связанные с ним.
    return 0;
}
