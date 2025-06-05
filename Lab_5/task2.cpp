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
    cout << "Создайте новое существо: \n";
    struct Monster monster;
    cout << "Введите количество голов: \n";
    cin >> monster.heads;
    cout << "Укажите количество лап: \n";
    cin >> monster.paws;
    cout << "Укажите количество глаз: \n";
    cin >> monster.eyes;
    cout << "Укажите количество хвостов: \n";
    cin >> monster.tails;
    cout << "Укажите тип покрытия (перья, огнестойкая чешуя, урановая шкура): \n";
    cin.ignore();
    getline(cin, monster.cover);
    cout << "Дайте название вашему существу: \n";
    getline(cin, monster.name);

    cout << "\nПоздравляю, вы создали:\n";
    cout << monster.name << '\n';
    cout << "Количество голов: "<< monster.heads << '\n';
    cout << "Количество лап: "<< monster.paws << '\n';
    cout << "Количество глаз: "<< monster.eyes << '\n';
    cout << "Количество хвостов: "<< monster.tails << '\n';
    cout << "Покрытие: "<< monster.cover << '\n';
}
