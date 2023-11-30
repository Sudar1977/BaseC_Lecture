#include <stdio.h>

void func(void)
{
 static int a = 5; //статическая память
//переменная а будет проинициализирована \
только один раз
    a++;
    printf("a = %d\n",a);
}

int main(void)
{
    func();
    func();
    func();
}
