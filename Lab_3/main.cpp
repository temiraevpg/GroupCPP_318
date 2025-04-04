/*
 *  Лабораторная работа N3
 *  Исследование функций С++ в IDE (интегрированной среде разработки) Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  locale:     IBM866
*/

#include <iostream>
#include <tasks.h>

#define UNIT    6

int main()
{
    using namespace std;

#if UNIT == 1
    cout << "Задание 1" << endl;
    cout << "Вероятность вытащить туз из колоды в 52 карты: " << probability(52, 4) << endl;
    cout << endl;
    cout << "Вероятность, что сумма выпавших очков для кубиков с 6 сторонами будет равна 7: " << probability(36, 6) << endl;
    cout << endl;
    cout << "Вероятность случайном расположении букв А, А, М, М в ряд в слово МАМА: " << probability(6, 1) << endl;

#elif UNIT == 2
    cout << "Задание 2" << endl;
    /*
     * В печать выводятся все аргументы (включая аргументы по умолчанию);
    */
    printChar();
    printChar(65);
    printChar(65, 66);
    printChar(65, 66, 67);
    printChar(65, 66, 67, 68);
#elif UNIT == 3
    initializatoin();
#elif UNIT == 4
    getAnimalName(Animal::cat);
    printNumberOfLegs(Animal::cat);
    cout << endl;
    getAnimalName(Animal::chicken);
    printNumberOfLegs(Animal::chicken);
    cout << endl;
    /*
     * немного наркомании для вывода невозможного
    */
    getAnimalName(static_cast<Animal>(5));
    printNumberOfLegs(static_cast<Animal>(5));
#elif UNIT == 5
    /*
     * при проверке последовательно перебираются функции:
     * min(a, b)
     * max(a, b)
     * unsigned short min(a, b)
     * unsigned short max(a, b)
     * min(a, b, limit)
     * max(a, b, limit)
     */
    test_all();
#elif UNIT == 6
    task6();
#elif UNIT == 7
    elevator();
#endif
    system("pause");
}
