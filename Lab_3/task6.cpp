#include <iostream>

using namespace std;

int x;
float y;
double z;
unsigned short k;

int i;
unsigned int ui;
short s;

void print(void){
    cout << "int i = " << i << endl;
    cout << "unsigned short k = " << k << endl;
    cout << "double z = " << z << endl;
    cout << "unsigned int ui = " << ui << endl;
    cout << "short s = " << s << endl;
    cout << endl;
}

void task6_static_cast(int x, float y, double z, unsigned short k){
    i = ( static_cast<int>(x) + static_cast<int>(y) ) * static_cast<int>(z) + static_cast<int>(k);
    k = static_cast<unsigned short>(x) - static_cast<unsigned short>(y) / static_cast<unsigned short>(z);
    z = static_cast<double>(x) * static_cast<double>(y) + static_cast<double>(z) / static_cast<double>(x);
    ui = static_cast<unsigned int>(x) / static_cast<unsigned int>(y) + static_cast<unsigned int>(k);
    s = static_cast<short>(x) % (static_cast<short>(x) / static_cast<short>(y));
    print();
}

void task6_c_style_cast(int x, float y, double z, unsigned short k){
    i = ( (int)x + (int)y ) * (int)z + (int)k;
    k = (unsigned short)x - (unsigned short)y / (unsigned short)z;
    z = (double)x * (double)y + (double)z / (double)x;
    ui = (unsigned int)x / (unsigned int)y + (unsigned int)k;
    s = (short)x % ((short)x / (short)y);
    print();
}

void task6_no_cast(int x, float y, double z, unsigned short k){
    i = ( x + y ) * z + k;
    k = x - y / z;
    z = x * y + z / x;
    ui = x / y + k;
    s = (short)x % ((short)x / (short)y );
    print();
}

void task6(void){
    cout << "Введите последовательно числа" << endl;
    cout << "int x = ";
    cin >> x;
    cout << "float y = ";
    cin >> y;
    cout << "double z = ";
    cin >> z;
    cout << "unsigned short k = ";
    cin >> k;
    cout << endl;
    cout << "Запускаем task6_static_cast()" << endl << endl;
    task6_static_cast(x, y, z, k);
    cout << "Запускаем task6_c_style_cast()" << endl << endl;
    task6_c_style_cast(x, y, z, k);
    cout << "Запускаем task6_no_cast()" << endl << endl;
    task6_no_cast(x, y, z, k);
    cout << "ВНИМАНИЕ - выражение для <s> в функции task6_no_cast сделано в виде (short)x % ((short)x / (short)y), т.к. ";
    cout << "происходит неявное преобразование к double, к которому неприменим оператор - %";
}

