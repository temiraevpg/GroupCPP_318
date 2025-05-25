#include <iostream>
#include <tasks.h>

using namespace std;

using Operation = int (*)(int, int);

int my_and(int a, int b) {
    return (a & b);
}

int my_or(int a, int b) {
    return (a | b);
}

int my_xor(int a, int b) {
    return (a ^ b);
}

#ifdef STL
#include <functional>
int multi_func(function<int(int, int)> op, int x, int y) {
    return op(x, y);
}
#else
int multi_func(int(*op)(int,int), int x, int y) {
    return op(x, y);
}
#endif

void ptr_func(void) {
    int type;
    int a;
    int b;
    Operation fun;
    do{
        cout << "Введите используемую функцию :\n";
        cout << "1 - AND \n";
        cout << "2 - OR \n";
        cout << "3 - XOR \n";
        cout << "Выбрана функция: ";
        cin >> type;
        if((type < 1) || (type > 3)) {
            cout << "Повторите ввод" << '\n';
        }
        else {
            break;
        }
    }while (true);

    cout << "Введите целое число a:\n";
    cin >> a;

    cout << "Введите целое число b:\n";
    cin >> b;

    cout << "Выбрана функция ";
    switch (type) {
    case 1:
        fun = my_and;
        cout << "AND : " << a << " & " << b << " = ";
        break;

    case 2:
        fun = my_or;
        cout << "OR : " << a << " | " << b << " = ";
        break;

    case 3:
        fun = my_xor;
        cout << "XOR : " << a << " ^ " << b << " = ";
        break;

    default:
        break;
    }

#ifdef STL
    cout << multi_func(function<int(int, int)>(fun), a, b) << '\n';
#else
    cout << multi_func(fun, a, b) << '\n';
#endif
}

