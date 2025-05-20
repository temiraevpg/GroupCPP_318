#include <iostream>

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

int multi_func(int(*op)(int,int), int x, int y) {
    return op(x, y);
}

void ptr_func(void) {
    int type;
    int a;
    int b;
    Operation fun;
    do{
        cout << "������ �ᯮ��㥬�� �㭪�� :\n";
        cout << "1 - AND \n";
        cout << "2 - OR \n";
        cout << "3 - XOR \n";
        cout << "��࠭� �㭪��: ";
        cin >> type;
        if((type < 1) || (type > 3)) {
            cout << "������ ����" << '\n';
        }
        else {
            break;
        }
    }while (true);

    cout << "������ 楫�� �᫮ a:\n";
    cin >> a;

    cout << "������ 楫�� �᫮ b:\n";
    cin >> b;

    cout << "��࠭� �㭪�� ";
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

    cout << multi_func(fun, a, b) << '\n';
}

