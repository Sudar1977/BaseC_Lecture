 chcp 1251
 gcc -c --std=c99 -o main.o main.c
 gcc -c --std=c99 -o SquareEquation.o SquareEquation.c
 gcc -o prog SquareEquation.o main.o
 pause