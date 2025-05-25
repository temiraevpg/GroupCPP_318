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

enum class ProgrEnum {
    Task_1,
    Task_2,
    Task_3,
    Task_4,
    Task_5,
    Task_6,
    Task_7,
    Task_8,
    Task_9
};

const ProgrEnum progrEnum = ProgrEnum::Task_1;

int main()
{
if (progrEnum == ProgrEnum::Task_1) {
    fill_buf(mersenne_buf, MERSENNE_BUF_SIZE);
    for(int i = 0; i < MERSENNE_BUF_SIZE; i++){
        cout << mersenne_buf[i] << " \t- индекс " << i << '\n';
    }
    cout << '\n';
    cout << max_ret(mersenne_buf, MERSENNE_BUF_SIZE) << " \t- максимальный элемент" << '\n';
    cout << min_ret(mersenne_buf, MERSENNE_BUF_SIZE) << " \t- минимальный элемент" << '\n';
    cout << '\n';

    fill_buf(my_buf, MERSENNE_BUF_SIZE);
    for(int i = 0; i < MERSENNE_BUF_SIZE; i++){
        cout << my_buf[i] << " \t- индекс " << i << '\n';
    }
    cout << '\n';
    cout << max_ret(my_buf, MERSENNE_BUF_SIZE) << " \t- максимальный элемент" << '\n';
    cout << min_ret(my_buf, MERSENNE_BUF_SIZE) << " \t- минимальный элемент" << '\n';
}
else if(progrEnum == ProgrEnum::Task_2) {
    create_matrix(bool_matrix[0], BOOL_MATRIX_SIZE);
    print_bool_matrix(bool_matrix[0], BOOL_MATRIX_SIZE);
    cout << '\n';
    fill_random(random_matrix[0], RANDOM_MATRIX_SIZE, MIN_RANDOM, MAX_RANDOM);
    print_matrix(random_matrix[0], RANDOM_MATRIX_SIZE);
    cout << '\n';
    cout << "Сумма составляет = " << calculate_summ(random_matrix[0], RANDOM_MATRIX_SIZE) << '\n';
}
else if(progrEnum == ProgrEnum::Task_3) {
    print_ASCII();
}
else if(progrEnum == ProgrEnum::Task_4) {
    cout << iteration_factorial(5) << '\n';
    cout << recursion_factorial(5) << '\n';
    cout << iteration_fibonacci(10) << '\n';
    print_piramid(15);
}
else if(progrEnum == ProgrEnum::Task_5) {
    multi_massive();
}
else if(progrEnum == ProgrEnum::Task_6) {
    task_6a();
    cout <<"\n\n";
    task_6b();
}
else if(progrEnum == ProgrEnum::Task_7) {
    phase_test();
}
else if(progrEnum == ProgrEnum::Task_8) {
    ptr_func();
}
else if(progrEnum == ProgrEnum::Task_9) {
    task_9();
}
    system("pause");
    return 0;
}
