#include <stdio.h>
#include <string.h>

#define MAXELEMENTS 1000

void input(char *string)
{
FILE *in;
    in = fopen("in.txt", "r");
    fscanf(in, "%[^\n]", string);
    fclose(in);
}

void output(char *str)
{
FILE *out;
    out = fopen("output.txt", "w");
int len = strlen(str)-1;
    for(int i = 0; i < len; i++)
        if(str[i] == str[len])
            fprintf(out, "%d ", i);
    printf("%d ", len);
    fclose(out);
}

int main(int argc, char **argv)
{
char stringFile[MAXELEMENTS];
    input(stringFile);
    output(stringFile);
    return 0;
}
