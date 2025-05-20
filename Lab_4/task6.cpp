#include <iostream>

using namespace std;

constexpr int array_size{6};

void task_6a(void){
    int m;
    double fx;
    char cht;

    do{
        cout << "Введите целое число m = ";
        cin >> m;
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    do{
        cout << "Введите дробное число fx = ";
        cin >> fx;
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    do{
        cout << "Введите символ cht = ";
        cin.ignore(32767, '\n');
        cin >> cht;
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else{
            break;
        }
    }while(true);

    cout << '\n';
    cout << "Использование & оператор: \n";
    cout  << "Адрес m = " << &m << '\n';
    cout  << "Адрес fx = " << &fx << '\n';
    cout  << "Адрес cht = " << static_cast<void*>(&cht) << '\n';  // иначе адрес char интерпретируется как строка
    cout << '\n';
    cout << "Используя операторы & и * : \n";
    cout  << "Адрес m = " << *&m << '\n';
    cout  << "Адрес fx = " << *&fx << '\n';
    cout  << "Адрес cht = " << *&cht << '\n';

    int *addr_m = &m;
    double *addr_fx = &fx;
    char *addr_cht = &cht;
    cout << '\n';
    cout << "Используя только переменную указателя:\n";
    cout  << "Адрес m = " << addr_m << '\n';
    cout  << "Адрес fx = " << addr_fx << '\n';
    cout  << "Адрес cht = " << static_cast<void*>(addr_cht) << '\n';  // иначе адрес char интерпретируется как строка
    cout << '\n';
    cout << "Использование только оператора указателя:\n";
    cout  << "Адрес m = " << *addr_m << '\n';
    cout  << "Адрес fx = " << *addr_fx << '\n';
    cout  << "Адрес cht = " << *addr_cht << '\n';
}

void task_6b(void){

    int array[array_size];
    int *ptr[array_size];
    for(int i = 0; i < array_size; i++){
        array[i] = i + 10;
        ptr[i] = &array[i];
    }
    cout << "Печать элементов массива через массив указателей:\n";
    for(int i = 0; i < array_size; i++){
        cout << *ptr[i] << '\n';
    }
}


