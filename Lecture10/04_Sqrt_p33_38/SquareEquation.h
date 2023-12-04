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

void Input(Equation* equation);
void CalcRoots(Equation *e);
void Print(Equation *equation);
void SquareEquation(void);
const char* str[]={"Введите a:\n","Введите b:\n","Введите c:\n",NULL};
