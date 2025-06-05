#include <iostream>

using namespace std;

struct World {
    string continent;
    string country;
    string capital;
    string region;
    string city;
};

constexpr int struct_size{5};

struct World world_static[struct_size] = {
    {
    .continent = "��ࠧ��",
    .country = "�����",
    .capital = "��᪢�",
    .region = "���फ��᪠� �������",
    .city = "����ਭ���"
    },
    {
        .continent = "��ࠧ��",
        .country = "�����",
        .capital = "��᪢�",
        .region = "���᪨� �ࠩ",
        .city = "����"
    },
    {
        .continent = "��ࠧ��",
        .country = "�����",
        .capital = "��᪢�",
        .region = "������᪠� ��㡫���",
        .city = "�����"
    },
    {
        .continent = "��ࠧ��",
        .country = "�����",
        .capital = "��᪢�",
        .region = "��᪠� �������",
        .city = "���"
    },
    {
        .continent = "��ࠧ��",
        .country = "�����",
        .capital = "��᪢�",
        .region = "����᪠� �������",
        .city = "�����"
    }
};

void data_print(struct World *p) {
    cout << "������: "  << p->region   << "\n";
    cout << "�⮫��: " << p->capital  << "\n";
    cout << "��࠭�: "  << p->country  << "\n";
    cout << "���ਪ: " << p->continent<< "\n";
}

bool find_city(struct World *p, string _city) {
    for(int i = 0; i < struct_size; p++, i++){
        if(p->city == _city){
            data_print(p);
            return true;
        }
    }
    return false;
}

void task3() {
    struct World* world_p = new struct World[struct_size]{
        {"����ୠ� ���ਪ�","���","��設�⮭","����","���-��⮭��"},
        {"����� ���ਪ�", "�ࠧ����","�ࠧ����"," ����-����","��"},
        {"��ਪ�", "�����","���஡�"," ������","������"},
        {"����ࠫ��", "����ࠫ��","�������","�������� ����ࠫ��","����"},
        {"��ࠧ��", "�����","���-����","�������","�㬡��"}
    };
    struct World* wp = world_p;

    string count;

    while (true) {
        wp = world_p;

        cout << "\n��� ��室� ������ - q \n";
        cout << "������ ��த: ";
        getline(cin, count);

        if(count == "q") {
            break;
        }
        else {
            if(find_city(wp, count)) {
                continue;
            }
            wp = world_static;
            if(find_city(wp, count)) {
                continue;
            }
            else {
                cout << "������ ���ଠ�� ���������.\n";
            }
        }
    }

    delete[] world_p;
}
