#include <stdio.h>
#include <conio.h>
#define N 3

int main(int argc, char **argv)
{
    FILE *open;
    char name[] = "temperature.txt";
    open = fopen(name, "r");
    if(open==NULL)
        return 1;
int Y,M,D;
int r;
    while((r = fscanf(open, "%d;%d;%d",&Y,&M,&D))>0)
    {
        if(r<N)
        {
            char s[20];
            r = fscanf(open, "%[^\n]", s);
            printf("ERROR %d=%s\n",r,s);
        }
    else
        printf("%d = %d;%d;%d\n", r,Y,M,D);
    }
    return 0;
}
