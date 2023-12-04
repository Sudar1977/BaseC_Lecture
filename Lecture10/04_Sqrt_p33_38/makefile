all: SquareEquation_demo

stack_demo: main.o func.o
	gcc -o SquareEquation_demo main.o SquareEquation.o

main.o: main.c SquareEquation.h
	gcc -c -o main.o main.c

SquareEquation.o: SquareEquation.c
	gcc -c -o SquareEquation.o SquareEquation.c

clean:
	del *.o
	del SquareEquation_demo.exe
