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
    .continent = "Евразия",
    .country = "Россия",
    .capital = "Москва",
    .region = "Свердловская область",
    .city = "Екатеринбург"
    },
    {
        .continent = "Евразия",
        .country = "Россия",
        .capital = "Москва",
        .region = "Пермский край",
        .city = "Пермь"
    },
    {
        .continent = "Евразия",
        .country = "Россия",
        .capital = "Москва",
        .region = "Удмуртская республика",
        .city = "Ижевск"
    },
    {
        .continent = "Евразия",
        .country = "Россия",
        .capital = "Москва",
        .region = "Тюменская область",
        .city = "Тюмень"
    },
    {
        .continent = "Евразия",
        .country = "Россия",
        .capital = "Москва",
        .region = "Челябинская область",
        .city = "Челябинск"
    }
};

void data_print(struct World *p) {
    cout << "Регион: "  << p->region   << "\n";
    cout << "Столица: " << p->capital  << "\n";
    cout << "Страна: "  << p->country  << "\n";
    cout << "Материк: " << p->continent<< "\n";
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
        {"Северная америка","США","Вашингтон","Техас","Сан-Антонио"},
        {"Южная америка", "Бразилия","Бразилиа"," Мату-Гросу","Куяба"},
        {"Африка", "Кения","Найроби"," Момбаса","Магуту"},
        {"Австралия", "Австралия","Канберра","Западная Австралия","Перт"},
        {"Евразия", "Индия","Нью-Дели","Махараштра","Мумбаи"}
    };
    struct World* wp = world_p;

    string count;

    while (true) {
        wp = world_p;

        cout << "\nДля выхода введите - q \n";
        cout << "Введите город: ";
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
                cout << "Данная информация отсутствует.\n";
            }
        }
    }

    delete[] world_p;
}
