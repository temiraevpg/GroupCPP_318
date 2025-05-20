#include <iostream>

using namespace std;

constexpr int array_size{6};

void task_6a(void){
    int m;
    double fx;
    char cht;

    do{
        cout << "������ 楫�� �᫮ m = ";
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
        cout << "������ �஡��� �᫮ fx = ";
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
        cout << "������ ᨬ��� cht = ";
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
    cout << "�ᯮ�짮����� & ������: \n";
    cout  << "���� m = " << &m << '\n';
    cout  << "���� fx = " << &fx << '\n';
    cout  << "���� cht = " << static_cast<void*>(&cht) << '\n';  // ���� ���� char ����������� ��� ��ப�
    cout << '\n';
    cout << "�ᯮ���� ������� & � * : \n";
    cout  << "���� m = " << *&m << '\n';
    cout  << "���� fx = " << *&fx << '\n';
    cout  << "���� cht = " << *&cht << '\n';

    int *addr_m = &m;
    double *addr_fx = &fx;
    char *addr_cht = &cht;
    cout << '\n';
    cout << "�ᯮ���� ⮫쪮 ��६����� 㪠��⥫�:\n";
    cout  << "���� m = " << addr_m << '\n';
    cout  << "���� fx = " << addr_fx << '\n';
    cout  << "���� cht = " << static_cast<void*>(addr_cht) << '\n';  // ���� ���� char ����������� ��� ��ப�
    cout << '\n';
    cout << "�ᯮ�짮����� ⮫쪮 ������ 㪠��⥫�:\n";
    cout  << "���� m = " << *addr_m << '\n';
    cout  << "���� fx = " << *addr_fx << '\n';
    cout  << "���� cht = " << *addr_cht << '\n';
}

void task_6b(void){

    int array[array_size];
    int *ptr[array_size];
    for(int i = 0; i < array_size; i++){
        array[i] = i + 10;
        ptr[i] = &array[i];
    }
    cout << "����� ����⮢ ���ᨢ� �१ ���ᨢ 㪠��⥫��:\n";
    for(int i = 0; i < array_size; i++){
        cout << *ptr[i] << '\n';
    }
}


