/*
 *  Лабораторная работа N4
 *  Исследование массивов, указателей, ссылок.
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  IDE:        Qt Creator 16
 *  locale:     IBM866
*/

#include <iostream>
#include <tasks.h>

using namespace std;

#define UNIT    9

int main()
{
#if UNIT == 1
    fill_buf(mersenne_buf, MERSENNE_BUF_SIZE);
    for(int i = 0; i < MERSENNE_BUF_SIZE; i++){
        cout << mersenne_buf[i] << " \t- индекс " << i << '\n';
    }
    cout << '\n';
    cout << max_ret(mersenne_buf, MERSENNE_BUF_SIZE) << " \t- максимальный элемент" << '\n';
    cout << min_ret(mersenne_buf, MERSENNE_BUF_SIZE) << " \t- минимальный элемент" << '\n';
#elif UNIT == 2
    create_matrix(bool_matrix[0], BOOL_MATRIX_SIZE);
    print_bool_matrix(bool_matrix[0], BOOL_MATRIX_SIZE);
    cout << '\n';
    fill_random(random_matrix[0], RANDOM_MATRIX_SIZE, MIN_RANDOM, MAX_RANDOM);
    print_matrix(random_matrix[0], RANDOM_MATRIX_SIZE);
    cout << '\n';
    cout << "Сумма составляет = " << calculate_summ(random_matrix[0], RANDOM_MATRIX_SIZE) << '\n';
#elif UNIT == 3
    print_ASCII();
#elif UNIT == 4
    cout << iteration_factorial(5) << '\n';
    cout << recursion_factorial(5) << '\n';
    cout << iteration_fibonacci(10) << '\n';
    print_piramid(15);
#elif UNIT == 5
    multi_massive();
#elif UNIT == 6
    task_6a();
    cout <<"\n\n";
    task_6b();
#elif UNIT == 7
    phase_test();
#elif UNIT == 8
    ptr_func();
#elif UNIT == 9
    task_9();
#endif
    system("pause");
    return 0;
}
