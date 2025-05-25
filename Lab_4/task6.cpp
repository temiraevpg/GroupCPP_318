#include <iostream>

using namespace std;

constexpr int array_size{6};

int check_input(void) {
    if(cin.fail()){
        cin.clear();
        cin.ignore(32767, '\n');
        return 1;
    }
    else{
        return 0;
    }
}

void task_6a(void){
    int m;
    double fx;
    char cht;

    do{
        cout << "������ 楫�� �᫮ m = ";
        cin >> m;
    }while(check_input());

    do{
        cout << "������ �஡��� �᫮ fx = ";
        cin >> fx;
    }while(check_input());

    do{
        cout << "������ ᨬ��� cht = ";
        cin.ignore(32767, '\n');
        cin >> cht;
    }while(check_input());

    cout << '\n';
    cout << "�ᯮ�짮����� & ������: \n";
    cout  << "���� m = " << &m << '\n';
    cout  << "���� fx = " << &fx << '\n';
    cout  << "���� cht = " << static_cast<void*>(&cht) << '\n';  // ���� ���� char ����������� ��� ��ப�
    cout << '\n';
    cout << "�ᯮ���� ������� & � * : \n";
    cout  << "���祭�� �� ����� m = " << *&m << '\n';
    cout  << "���祭�� �� ����� fx = " << *&fx << '\n';
    cout  << "���祭�� �� ����� cht = " << *&cht << '\n';

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
    cout  << "���祭�� �� ����� m = " << *addr_m << '\n';
    cout  << "���祭�� �� ����� fx = " << *addr_fx << '\n';
    cout  << "���祭�� �� ����� cht = " << *addr_cht << '\n';
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


