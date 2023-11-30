#include <inttypes.h>
#include <stdio.h>

int main()
{
    char c;
    uint64_t Number=0;//unsigned long long
    while( (c=getchar())!='\n' && Number*10 < INT64_MAX)
    //спец символ новой строки\
    проверка на переполнения
        if(c>='0' && c<='9')
        Number = Number*10+c-'0';//if Number
        printf("%"PRIu64,Number);
    return 0;
}//dasdas123456789hjkh1234566789jkl123456789nn123456789
