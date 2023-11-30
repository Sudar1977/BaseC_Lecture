#include <stdio.h>

// Плохо
unsigned int a, h;
char ln[25], f[25];
 for(int i=0; i<25; i++)

 // Хорошо
#define NAME_LENGTH 100
unsigned int age, height;
char lastName[NAME_LENGTH];
char firstName[NAME_LENGTH];
for(int i=0; i<NAME_LENGTH; i++);
