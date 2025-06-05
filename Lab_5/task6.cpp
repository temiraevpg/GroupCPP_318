#include <iostream>
#include <string>

/*
��� ���ᨢ ��ப (���ᨬ��쭮 25 ��ப, ������ ��ப� �� ����� 80 ᨬ�����). ��ப�
�������� ���짮��⥫��, �ਧ��� �����襭�� ����� ? ���� ���⮩ ��ப�. ����冷���
��ப� �� ����� ��� �� ��䠢��� (�� �롮�� ���짮��⥫�).
*/

using namespace std;

constexpr int str_buf_size = 25;

string base[str_buf_size];

void print_all(string buf[], size_t len) {
    for(size_t i = 0; i < len; i++) {
        cout << i << " ";
        cout << buf[i] << '\n';
    }
}

void abc_sort(string buf[], size_t len) {
    string temp;
    while(len--) {
        bool swapped = false;
        for(size_t i = 0; i < len; i++) {
            if(buf[i] > buf[i + 1]) {
                temp = buf[i + 1];
                buf[i + 1] = buf[i];
                buf[i] = temp;
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

void len_sort(string buf[], size_t len) {
    string temp;
    while(len--) {
        bool swapped = false;
        for(size_t i = 0; i < len; i++) {
            if(buf[i].size() > buf[i + 1].size()) {
                temp = buf[i + 1];
                buf[i + 1] = buf[i];
                buf[i] = temp;
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

void task6() {
    string input;
    int len = 0;
    cout << "������� ��᫥����⥫쭮 ��ப�, �� ����� 25��.\n";
    for(size_t i = 0; i < str_buf_size; i++) {
        cout << i << " ";
        getline(cin, input);
        if(input == "" || i == 24) {
            len = i;
            break;
        }
        else {
            base[i] = input;
        }
    }
    cout << '\n';
    cout << "����஢�� �� ��䠢���:\n";
    abc_sort(base, len);
    print_all(base, len);
    cout << '\n';
    cout << "����஢�� �� �����:\n";
    len_sort(base, len);
    print_all(base, len);
}
