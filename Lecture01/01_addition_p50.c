/* Это комментарий.
 Он не влияет на работу программы */
// Это тоже комментарий только из одной строки.

#include <stdio.h> // Подключаем библиотеку ввода-вывода

 int c; /* глобальная переменная */

int main(void) // Программа начинается тут. Это точка выполнения программы
{ // Начало блока main
    int a, b, c; //объявление локальных переменных ошибка c
    a = 10; // Присвоить переменной a значение 10
    b = 20; // Присвоить переменной a значение 20
    c = a + b;//ошибка ;
    printf("c = %d",c); // Напечатать сумму переменных
    return 0; // Завершает программу с кодом 0, что все хорошо
} // Конец блока main
