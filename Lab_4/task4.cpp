#include <iostream>


using namespace std;

unsigned int iteration_factorial(int n){
    if(n < 0){
        cout << "Число должно быть положительным" << '\n';
        return 0;
    }

    unsigned int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


unsigned int recursion_factorial(int n){
    if(n < 0){
        cout << "Число должно быть положительным" << '\n';
        return 0;
    }

    if(n > 1){
        return n * recursion_factorial(n - 1);
    }

    return 1;
}

unsigned int iteration_fibonacci(int number){
    if(number == 0) return 0;
    if(number == 1) return 1;
    unsigned int fib_previous = 1;
    unsigned int fib = 1;
    for(int i = 2; i < number; i++){
        fib += fib_previous;
        fib_previous = fib - fib_previous;
    }
    return fib;
}

void print_piramid(int n){
    if(n < 0){
        cout << "Число должно быть положительным" << '\n';
        return;
    }
    /* расчет смещения первого элемента */
    int shift = 0;                       // смещение в пробелах (-1 - от края)
    int temp = 0;                        // временная переменная
    for(int i = 1; temp < n; i++){
        temp += i;
        shift++;
    }

    int step = 1;
    temp = 0;
    for(int i = 1; temp < n; i++){
        /* печать отступа */
        for(int j = 0; j < shift; j++){
            cout << " ";
        }
        shift--;
        /* печать уменьшающихся цифр */
        for(int j = step; j > 0; j--){
            cout << j << " ";
        }
        step++;
        temp += i;
        cout << "  " << temp;
        cout << '\n';
    }
}
