/*
 *  Лабораторная работа N1
 *  Исследование С++ комментариев, библиотеки ввода-вывода в IDE (интегрированной
 *  среде разработки) Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  locale:     IBM866
*/

#include <iostream>
#include <iomanip>
using namespace std;

#if 0
    Выбор задания для сборки через дериктивы препроцессора STAGE == 1 ... 3
#endif

#define STAGE   1

int main(){

#if STAGE == 1  // Первый блок программ
    std::cout << "Номер группы 318, факультет дополнительного образования" << std::endl;
    std::cout << "Разработчики программы 1. Темираев Петр Георгиевич" << std::endl;
    std::cout << setw(23) << "" << "2. ______________" << std::endl;
    std::cout << "Номер Лабораторной работы 1" << std::endl;
    std::cout << endl;
/*
 *
 * Вес программы:
 * 67кб - debug
 * 17кб - release
 *
 */
#endif

#if STAGE == 2  // Второй блок программ
    cout << "*****" << setw(35) << "ТУСУР"  << setw(35) << "*****" << endl;
    cout << endl;
    cout << endl;
    cout << setw(45) << "" <<"Факультет: Доп. Образование" << endl;
    cout << setw(45) << "" << "Группа: 318" << endl;
    cout << setw(45) << "" << "Студент: Темираев Пётр" << endl;
    cout << endl;
    cout << setw(32) << "" << "Томск 2025" << endl;
#endif

#if STAGE == 3 // Третий блок программ
    cout << "Вычисление скорости прямолинейного движения (по расстоянию и времени)." << endl;
    cout << "Введите расстояние: ";
    double AllDistance;
    cin >> AllDistance;
    cout << "Введите время: ";
    double AllTime;
    cin >> AllTime;
    cout << "Скорость прямолинейного движения: " << AllDistance/AllTime << endl;
    cout << endl;

    cout << "Вычисление ускорения (по начальной скорости, конечной скорости и времени)." << endl;
    cout << "Введите начальную скорость: ";
    double InitialSpeed;
    cin >> InitialSpeed;
    cout << "Введите конечную скорость: ";
    double FinalSpeed;
    cin >> FinalSpeed;
    cout << "Введите время: ";
    double TotalTime;
    cin >> TotalTime;
    cout << "Вычесленное ускорение: ";
    cout << (FinalSpeed-InitialSpeed)/TotalTime << endl;
    cout << endl;

    cout << "Вычисление радиуса круга (по длине его окружности)." << endl;
    cout << "Введите длину окружности: ";
    double CircleLen;
    cin >> CircleLen;
    cout << "Радиус круга: " << CircleLen*3.14159265 << endl;

#endif
}
