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
    if(!static_cast<unsigned short>(x))
    {
        cout << "x = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!static_cast<unsigned short>(y))
    {
        cout << "y = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!static_cast<unsigned short>(z))
    {
        cout << "z = 0, ������ �� 0 �����!\n";
        return;
    }
    i = ( static_cast<int>(x) + static_cast<int>(y) ) * static_cast<int>(z) + static_cast<int>(k);
    k = static_cast<unsigned short>(x) - static_cast<unsigned short>(y) / static_cast<unsigned short>(z);
    z = static_cast<double>(x) * static_cast<double>(y) + static_cast<double>(z) / static_cast<double>(x);
    ui = static_cast<unsigned int>(x) / static_cast<unsigned int>(y) + static_cast<unsigned int>(k);
    s = static_cast<short>(x) % (static_cast<short>(x) / static_cast<short>(y));
    print();
}

void task6_c_style_cast(int x, float y, double z, unsigned short k){
    if(!(unsigned short)x)
    {
        cout << "x = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!(unsigned short)y)
    {
        cout << "y = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!(unsigned short)z)
    {
        cout << "z = 0, ������ �� 0 �����!\n";
        return;
    }
    i = ( (int)x + (int)y ) * (int)z + (int)k;
    k = (unsigned short)x - (unsigned short)y / (unsigned short)z;
    z = (double)x * (double)y + (double)z / (double)x;
    ui = (unsigned int)x / (unsigned int)y + (unsigned int)k;
    s = (short)x % ((short)x / (short)y);
    print();
}

void task6_no_cast(int x, float y, double z, unsigned short k){
    if(!(unsigned short)x)
    {
        cout << "x = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!(unsigned short)y)
    {
        cout << "y = 0, ������ �� 0 �����!\n";
        return;
    }
    if(!(unsigned short)z)
    {
        cout << "z = 0, ������ �� 0 �����!\n";
        return;
    }
    i = ( x + y ) * z + k;
    k = x - y / z;
    z = x * y + z / x;
    ui = x / y + k;
    s = (short)x % ((short)x / (short)y );
    print();
}

void task6(void){
    cout << "������ ��᫥����⥫쭮 �᫠" << endl;

    do{
        cout << "int x = ";
        cin >> x;
        cin.ignore(32767, '\n');
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    do{
        cout << "float y = ";
        cin >> y;
        cin.ignore(32767, '\n');
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    do{
        cout << "double z = ";
        cin >> z;
        cin.ignore(32767, '\n');
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    do{
        cout << "unsigned short k = ";
        cin >> k;
        cin.ignore(32767, '\n');
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    cout << endl;
    cout << "����᪠�� task6_static_cast()" << endl << endl;
    task6_static_cast(x, y, z, k);
    cout << "����᪠�� task6_c_style_cast()" << endl << endl;
    task6_c_style_cast(x, y, z, k);
    cout << "����᪠�� task6_no_cast()" << endl << endl;
    task6_no_cast(x, y, z, k);
    cout << "�������� - ��ࠦ���� ��� <s> � �㭪樨 task6_no_cast ᤥ���� � ���� (short)x % ((short)x / (short)y), �.�. ";
    cout << "�ந�室�� ���� �८�ࠧ������ � double, � ���஬� ���ਬ���� ������ - %";
}

