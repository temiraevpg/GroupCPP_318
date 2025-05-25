#include <iostream>
#include <random>
#include <limits>

using namespace std;

constexpr int m_char = 1;
constexpr int m_short = 2;
constexpr int m_int = 3;
constexpr int m_float = 4;
constexpr int m_double = 5;

/*
 *  Сортировка массива реализована тут же. чтобы попусту не раздувать код
 */

void print_mass(void *buf, int len, int type){

    if(type == 1){
        char *ptr = static_cast<char *>(buf);
        char *start = ptr;
        int start_len = len;
        for(int i = 0; i < len; i++){
            cout << static_cast<int>(*ptr++) << " ";
        }
        cout << '\n';
        cout << "Сортировка массива\n";
        ptr = start;
        while(len--) {
            bool swapped = false;
            for(int i = 0; i < len; i++) {
                if(ptr[i] > ptr[i + 1]) {
                    ptr[i] ^= ptr[i + 1];
                    ptr[i + 1] ^= ptr[i];
                    ptr[i] ^= ptr[i + 1];
                    swapped = true;
                }
            }
            if(swapped == false)
                break;
        }
        ptr = start;
        len = start_len;
        for(int i = 0; i < len; i++){
            cout << static_cast<int>(*ptr++) << " ";
        }
    }
    else if(type == 2){
        short *ptr = static_cast<short *>(buf);
        short *start = ptr;
        short start_len = len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
        cout << '\n';
        cout << "Сортировка массива\n";
        ptr = start;
        while(len--) {
            bool swapped = false;
            for(int i = 0; i < len; i++) {
                if(ptr[i] > ptr[i + 1]) {
                    ptr[i] ^= ptr[i + 1];
                    ptr[i + 1] ^= ptr[i];
                    ptr[i] ^= ptr[i + 1];
                    swapped = true;
                }
            }
            if(swapped == false)
                break;
        }
        ptr = start;
        len = start_len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
    }
    else if(type == 3){
        int *ptr = static_cast<int *>(buf);
        int *start = ptr;
        int start_len = len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
        cout << '\n';
        cout << "Сортировка массива\n";
        ptr = start;
        while(len--) {
            bool swapped = false;
            for(int i = 0; i < len; i++) {
                if(ptr[i] > ptr[i + 1]) {
                    ptr[i] ^= ptr[i + 1];
                    ptr[i + 1] ^= ptr[i];
                    ptr[i] ^= ptr[i + 1];
                    swapped = true;
                }
            }
            if(swapped == false)
                break;
        }
        ptr = start;
        len = start_len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
    }
    else if(type == 4){
        float *ptr = static_cast<float *>(buf);
        float *start = ptr;
        int start_len = len;
        float temp;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
        cout << '\n';
        cout << "Сортировка массива\n";
        ptr = start;
        while(len--) {
            bool swapped = false;
            for(int i = 0; i < len; i++) {
                if(ptr[i] > ptr[i + 1]) {
                    temp = ptr[i + 1];
                    ptr[i + 1] = ptr[i];
                    ptr[i] = temp;
                    swapped = true;
                }
            }
            if(swapped == false)
                break;
        }
        ptr = start;
        len = start_len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
    }
    else if(type == 5){
        double *ptr = static_cast<double *>(buf);
        double *start = ptr;
        int start_len = len;
        double temp;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
        cout << '\n';
        cout << "Сортировка массива\n";
        ptr = start;
        while(len--) {
            bool swapped = false;
            for(int i = 0; i < len; i++) {
                if(ptr[i] > ptr[i + 1]) {
                    temp = ptr[i + 1];
                    ptr[i + 1] = ptr[i];
                    ptr[i] = temp;
                    swapped = true;
                }
            }
            if(swapped == false)
                break;
        }
        ptr = start;
        len = start_len;
        for(int i = 0; i < len; i++){
            cout << *ptr++ << " ";
        }
    }
    else {
        cout << "Выбран неподдерживаемый формат буфера данных";
    }
    cout << '\n';
}



void multi_massive(void){
    int type;
    do{
        cout << "Введите тип данных массива: " << '\n';
        cout << "1 - char" << '\n';
        cout << "2 - short" << '\n';
        cout << "3 - int" << '\n';
        cout << "4 - float" << '\n';
        cout << "5 - double" << '\n';
        cin >> type;
        if((type < 1) || (type > 5)) {
            cout << "Повторите ввод" << '\n';
        }
        else {
            break;
        }
    }while (true);

    int size;
    do{
        cout << "Укажите количество элементов массива: ";
        cin >> size;
        if(size < 1) {
            cout << "Количество элементов должно быть больше 0" << '\n';
        }
        else {
            break;
        }
    }while (true);

    random_device rd;       // Получаем случайное значение из аппаратного генератора
    mt19937 gen(rd());      // Инициализируем генератор
    if(type == m_char) {
        uniform_int_distribution<char> char_dist(numeric_limits<char>::min(), numeric_limits<char>::max());
        char mas[size];
        for(int j = 0; j < size; j++){
            mas[j] = char_dist(gen);
        }
        print_mass(mas, size, 1);
    }
    else if (type == m_short){
        uniform_int_distribution<short> short_dist(numeric_limits<short>::min(), numeric_limits<short>::max());
        short mas[size];
        for(int j = 0; j < size; j++){
            mas[j] = short_dist(gen);
        }
        print_mass(mas, size, 2);
    }
    else if(type == m_int){
        uniform_int_distribution<int> int_dist(numeric_limits<int>::min(), numeric_limits<int>::max());
        int mas[size];
        for(int j = 0; j < size; j++){
            mas[j] = int_dist(gen);
        }
        print_mass(mas, size, 3);
    }
    else if(type == m_float){
        uniform_real_distribution<float> float_dist(-1.0f, 1.0f);
        float mas[size];
        for(int j = 0; j < size; j++){
            mas[j] = float_dist(gen);
        }
        print_mass(mas, size, 4);
    }
    else if(type == m_double){
        uniform_real_distribution<double> double_dist(-1.0, 1.0);
        double mas[size];
        for(int j = 0; j < size; j++){
            mas[j] = double_dist(gen);
        }
        print_mass(mas, size, 5);
    }
    else{
        cout << "Это мистика, как мы сюда попали" << '\n';
    }

}

