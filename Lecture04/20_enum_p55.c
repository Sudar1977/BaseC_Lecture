#include <stdio.h>

// Плохо
unsigned int a, h;
char ln[25], f[25];

// Хорошо
enum { NAME_LENGTH = 25 };
unsigned int age, height;
char lastName[NAME_LENGTH];
char firstName[NAME_LENGTH];
