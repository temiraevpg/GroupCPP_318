/*
 *  Лабораторная работа N5
 *  Исследование строк, структур памяти С++ в IDE Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  IDE:        Qt Creator 16
 *  locale:     IBM866
*/
#include "tasks.h"
#include <iostream>

using namespace std;

#define TASK    8

int main()
{
#if TASK == 1
    task1((void*)&main);
#elif TASK == 2
    task2();
#elif TASK == 3
    task3();
#elif TASK == 4
    string data = "2q9pd2e";
    cout << unpack(data);
#elif TASK == 5
    string data = "\tFinita \t \t\t  la commedia\t\t  \t\t!";
    cout << normalize(data);
#elif TASK == 6
    task6();
#elif TASK == 7

    string data;
    int x;
    data = "0";
    x = str_to_int(data);
    cout << x << '\n';

    data = "-987654321";
    x = str_to_int(data);
    cout << x << '\n';

    data = "01234567890";
    x = str_to_int(data);
    cout << x << '\n';

    x = 0;
    data = int_to_str(x);
    cout << data << '\n';

    x = -1234567890;
    data = int_to_str(x);
    cout << data << '\n';

    x = 987654321;
    data = int_to_str(x);
    cout << data << '\n';

#elif TASK == 8
    task8();
#endif

    system("pause");
}
