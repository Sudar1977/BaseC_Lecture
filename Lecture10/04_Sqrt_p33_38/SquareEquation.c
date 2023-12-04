#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include "SquareEquation.h"

static float InputFloat(const char* message)
{
float number;
    printf("%s",message);
    scanf("%f",&number);
    return number;
}

void Input(Equation* equation)
{
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
        default:
            printf("Ошибка количества корней%d!\n",equation->rootsNumber);
    }
}

float sqr(float x) { return x*x; };
static void CalcRealRoots(Equation *e)
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
        e->sqrtD = sqr(e->B) - e->coef[A]*e->coef[C];
        if(e->sqrtD<0)
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

static void CalcRootsTest(Equation *equation)
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
