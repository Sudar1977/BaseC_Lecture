#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    char Choice;
    setlocale(LC_ALL, "Rus");
    while(1)
    {
        printf("1. ���������� ������ ����������� ���������\n");
        printf("0. �����\n");
        printf("��� ����� ������� Q\n");
        Choice = getch();
        switch(Choice)
        {
            case '1':
                SquareEquation();
            break;
            case '0':
            case 'q':
            case 'Q':
                return 0;
                break;
            default:
                printf("���������� ����� %x\n",Choice);
                break;
        }
    }
    return 0;
}

void SquareEquation(void)
{
float a,b,c;
float B,d;
float X1,X2;
    printf("���������� ������ ����������� ��������� \\\"a*x*x+b*x+�=0\"\n");
    printf("������� a:\n");
    scanf ("%f", &a); //1
    printf("������� b:\n");
    scanf ("%f", &b); //18
    printf("������� c:\n");
    scanf ("%f", &c); //32
    B = b/2;
    if(a!=0)
    {
        d = B*B-a*c;
        if(d<0)
        {
            printf("����� ����������� ��������� ����������� \n");
        }
        else
        {
            printf("����� ����������� ��������� \n");
            d = sqrtf(d);
            X1 = (-B + d)/a; //2
            printf("X1 = %f \n",X1);
            X2 = (-B - d)/a; //16
            printf("X2 = %f \n",X2);
        }
    }
     else
    {
        if(b!=0)
        {
            X1 = -c/b;
            printf("������ ��������� ��������� %f\n",X1);
        }
        else
        {
            printf("������ ���!\n");
        }
    }
}
