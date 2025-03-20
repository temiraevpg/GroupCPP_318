#include <iostream>
using namespace std;

void printChar(int a='a', char b='b', char c='c', char d='d'){
    if(a == 'a') cout << "Вариант 1 ";
    else if(b == 'b') cout << "Вариант 2 ";
    else if(c == 'c') cout << "Вариант 3 ";
    else if(d == 'd') cout << "Вариант 4 ";
    else cout << "Вариант 5 ";
    cout << " a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
}
