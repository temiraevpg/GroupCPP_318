#include <iostream>

using namespace std;

struct Monster {
    unsigned int heads;
    unsigned int paws;
    unsigned int eyes;
    unsigned int tails;
    string cover;
    string name;
};

void task2() {
    cout << "������� ����� ����⢮: \n";
    struct Monster monster;
    cout << "������ ������⢮ �����: \n";
    cin >> monster.heads;
    cout << "������ ������⢮ ���: \n";
    cin >> monster.paws;
    cout << "������ ������⢮ ����: \n";
    cin >> monster.eyes;
    cout << "������ ������⢮ 墮�⮢: \n";
    cin >> monster.tails;
    cout << "������ ⨯ ������� (�����, �����⮩��� ����, �࠭���� ���): \n";
    cin.ignore();
    getline(cin, monster.cover);
    cout << "���� �������� ��襬� ������: \n";
    getline(cin, monster.name);

    cout << "\n����ࠢ���, �� ᮧ����:\n";
    cout << monster.name << '\n';
    cout << "������⢮ �����: "<< monster.heads << '\n';
    cout << "������⢮ ���: "<< monster.paws << '\n';
    cout << "������⢮ ����: "<< monster.eyes << '\n';
    cout << "������⢮ 墮�⮢: "<< monster.tails << '\n';
    cout << "�����⨥: "<< monster.cover << '\n';
}
