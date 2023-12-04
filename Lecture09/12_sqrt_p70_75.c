#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

typedef struct Equation
{
enum {COEF_N=3, ROOT_N=2} SIZE;
enum {NO_ROOTS=-1,COMPLEX_ROOTS=0,C=2,B=1,A=0} ROOTS;
    float coef[COEF_N];
    float roots[ROOT_N];
    int rootsNumber;
    float sqrD;
    float B;
} Equation;

float InputFloat(const char* message)
{
float number;
    printf("%s",message);
    scanf("%f",&number);
    return number;
}

void Input(Equation* equation)
{
const char* str[]={"Введите a:\n","Введите b:\n","Введите c:\n",NULL};
    printf("Вычисление корней квадратного уравнения \\ \"a*x*x+b*x+с=0\"\n");
    for(int i=0;i<COEF_N;i++)
        equation->coef[i] = InputFloat(str[i]);//1//18//32
}

void Print(Equation *equation)
{
    switch(equation->rootsNumber)
    {
        case 2:
            printf("Корни квадратного уравнения \n");
            printf("X1 = %f \n",equation->roots[0]);
            printf("X2 = %f \n",equation->roots[1]);
        break;
        case 1:
            printf("Корень линейного уравнения %f\n",equation->roots[0]);
        break;
        case COMPLEX_ROOTS:
            printf("Корни квадратного уравнения комплексные \n");
        break;
        case NO_ROOTS:
            printf("Корней НЕТ!\n");
        break;
        default: printf("Ошибка количества корней%d!\n",equation->rootsNumber);
    }
}

float sqr(float x) { return x*x; };
void CalcRealRoots(Equation *e)
{
float d = sqrtf(e->sqrD);//2//16
    e->roots[0] = (-e->B + d)/e->coef[A];
    e->roots[1] = (-e->B - d)/e->coef[A];
}

void CalcRoots(Equation *e)
{
    e->rootsNumber=0;
    e->B = e->coef[B]/2;
    if(e->coef[A]!=0)
    {
        e->sqrD = sqr(e->B) - e->coef[A]*e->coef[C];
        if(e->sqrD<0)
            e->rootsNumber=COMPLEX_ROOTS;
        else
        {
            e->rootsNumber=2;
            CalcRealRoots(e);
        }
    }
    else
    {
        if(e->coef[B]!=0)
        {
            e->roots[0] = -e->coef[C]/e->coef[B];
            e->rootsNumber=1;
        }
        else
            e->rootsNumber=NO_ROOTS;
    }
}

void CalcRootsTest(Equation *equation)
{
    equation->roots[0] = 1;
    equation->roots[1] = 2;
    equation->rootsNumber = 2;
}

void SquareEquation(void)
{
    Equation* equation = malloc(sizeof(Equation));//new в С++
    Input(equation);
    //CalcRootsTest(equation);
    CalcRoots(equation);
    Print(equation);
    free(equation);
}

int main(int argc, char **argv)
{
char Choice;
    setlocale(LC_ALL, "Rus");
    while(1)
    {
        printf("1. Вычисление корней квадратного уравнения\n");
        printf("0. Выход\n");
        printf("Для выход нажмите Q\n");
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
                printf("Непонятный выбор %x\n",Choice);
            break;
        }
    }
    return 0;
}
