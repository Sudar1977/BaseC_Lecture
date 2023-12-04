#include <stdio.h>

int str_sum_digits(const char*s)
{
    int sum=0;
    for(int i = 0;s[i]!='\0';i++)
        if(s[i]>'0' && s[i]<='9')
            sum+=s[i]-'0';
    return sum;
}

int main(void)
{
    char s[100];
    scanf("%s",s);
    printf("str_sum_digits=%d\n",str_sum_digits(s));
    return 0;
}
