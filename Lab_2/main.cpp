/*
 *  Лабораторная работа N2
 *  Исследование типов данных, лексем в IDE (интегрированной среде разработки) Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  locale:     IBM866
*/

#include <iostream>
#include <cmath>
#include <limits>
#include <bitset>

/*
 * при переменной char для возраста становится невозможным ввести вес
 * ошибка появляется если возраст больше 1 цифры, вероятно из-за символа перевода каретки
 * для проверки ошибки LOL -> 1
*/
#define LOL     0
#define TASK    1

const double level_1b{16};
const double level_2b{18.5};
const double level_3b{25};
const double level_4b{30};
const double level_5b{35};
const double level_6b{40};

const char age_1{19};
const char age_2{25};
const char age_3{35};
const char age_4{45};
const char age_5{55};

#define SHIFT   (static_cast<double>(5))

const double level_1c_male{21.4};
const double level_1c_female{19.5};
const double level_2c_male{21.6};
const double level_2c_female{23.2};
const double level_3c_male{22.9};
const double level_3c_female{23.4};
const double level_4c_male{25.8};
const double level_4c_female{25.2};
const double level_5c_male{26.6};
const double level_6c_female{27.3};

using namespace std;
int main()
{

#if TASK == 1
    cout << "Калькулятор для расчета идеального веса" << endl;
    cout << endl;
    cout << "Введите возраст (полных лет): ";
#if LOL == 0
    short age;
#elif LOL == 1
    char age;
#endif
    cin >> age;
    cout << "Введите вес (килограммы): ";
    short weight;
    cin >> weight;
    cout << "Введите рост (сантиметры): ";
    short height;
    cin >> height;
    cout << "Введите пол (мужчина 1, женщина 0): ";
    bool gender;
    cin >> gender;
    cout << "Введите метод расчета идеального веса:" << endl;
    cout << "\ta - по формуле Брока" << endl;
    cout << "\tb - по индексу массы тела (ИМТ)" << endl;
    cout << "\tс - по индексу массы тела (ИМТ) с учетом возраста" << endl;
    cout << "Метод: ";
    char method;
    cin >> method;

    if (method == 'a') {
        if (gender) {   // если мужчина
            cout << "Ваш идеальный вес по формуле Брока: " << ((height-100)*0.9) << " кг." << endl;
        }
        else {
            cout << "Ваш идеальный вес по формуле Брока: " << ((height-100)*0.85) << " кг." << endl;
        }
    }

    double imt = weight/pow(static_cast<double>(height)/100, 2);

    if (method == 'b') {
        cout << "Согласно ИМТ у вас ";
        if (imt <= level_1b) {
            cout << "выраженный дефицит массы.";
        }
        else if (imt > level_1b and imt <= level_2b) {
            cout << "недостаточная (дефицит) масса тела.";
        }
        else if (imt > level_2b and imt <= level_3b) {
            cout << "нормальная масса тела.";
        }
        else if (imt > level_3b and imt <= level_4b) {
            cout << "избыточная масса тела (предожирение).";
        }
        else if (imt > level_4b and imt <= level_5b) {
            cout << "ожирение первой степени.";
        }
        else if (imt > level_5b and imt <= level_6b) {
            cout << "ожирение второй степени.";
        }
        else {
            cout << "ожирение третьей степени (морбидное).";
        }
    }

    if (method == 'c') {
        cout << "Согласно ИМТ с учетом возраста у вас ";
        if (age >= age_1 and age < age_2) {
            if (gender) {   // если мужчина
                if (imt < level_1c_male) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_1c_male and imt < level_1c_male + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
            else  {
                if (imt < level_1c_female) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_1c_female and imt < level_1c_female + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
        }
        else if (age >= age_2 and age < age_3) {
            if (gender) {   // если мужчина
                if (imt < level_2c_male) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_2c_male and imt < level_2c_male + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
            else  {
                if (imt < level_2c_female) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_2c_female and imt < level_2c_female + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
        }
        else if (age >= age_3 and age < age_4) {
            if (gender) {   // если мужчина
                if (imt < level_3c_male) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_3c_male and imt < level_3c_male + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
            else  {
                if (imt < level_3c_female) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_3c_female and imt < level_3c_female + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
        }
        else if (age >= age_4 and age < age_5) {
            if (gender) {   // если мужчина
                if (imt < level_4c_male) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_4c_male and imt < level_4c_male + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
            else  {
                if (imt < level_4c_female) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_4c_female and imt < level_4c_female + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
        }
        else if ( age >= age_5) {
            if (gender) {   // если мужчина
                if (imt < level_5c_male) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_5c_male and imt < level_5c_male + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
            else  {
                if (imt < level_6c_female) {
                    cout << "недостаточная (дефицит) масса тела.";
                }
                else if (imt >= level_6c_female and imt < level_6c_female + SHIFT) {
                    cout << "нормальная масса тела.";
                }
                else {
                    cout << "избыточная масса тела (предожирение).";
                }
            }
        }
    }
#endif

#if TASK == 2

    cout << "bool: " << sizeof(bool) << "bytes;" << endl;
    cout << "char: " << sizeof(char) << "bytes;" << endl;
    cout << "short: " << sizeof(short) << "bytes;" << endl;
    cout << "int: " << sizeof(int) << "bytes;" << endl;
    cout << "float: " << sizeof(float) << "bytes;" << endl;
    cout << "double: " << sizeof(double) << "bytes;" << endl;
    cout << endl;
    cout << "signed char: " << sizeof(signed char) << "bytes;" << endl;
    cout << "signed short: " << sizeof(signed short) << "bytes;" << endl;
    cout << "signed int: " << sizeof(signed int) << "bytes;" << endl;
    cout << "signed long long: " << sizeof(signed long long) << "bytes;" << endl;
    cout << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << "bytes;" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << "bytes;" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes;" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << "bytes;" << endl;
    cout << endl;
    cout << "Числовой диапазон signed char: \t\t" << "от " << CHAR_MIN << "\t\t\t до " << CHAR_MAX << endl;
    cout << "Числовой диапазон signed short: \t" << "от " << SHRT_MIN << "\t\t до " << SHRT_MAX << endl;
    cout << "Числовой диапазон signed int: \t\t" << "от " << INT_MIN << "\t\t до " << INT_MAX << endl;
    cout << "Числовой диапазон signed long long: \t" << "от " << LONG_LONG_MIN << "\t до " << LONG_LONG_MAX << endl;
    cout << endl;
    cout << "Числовой диапазон unsigned char: \t" << "от " << 0 << " до " << UCHAR_MAX << endl;
    cout << "Числовой диапазон unsigned short: \t" << "от " << 0 << " до " << USHRT_MAX << endl;
    cout << "Числовой диапазон unsigned int: \t" << "от " << 0 << " до " << UINT_MAX << endl;
    cout << "Числовой диапазон unsigned long long: \t" << "от " << 0 << " до " << ULONG_LONG_MAX << endl;

    cout << hex << uppercase << showbase << endl;
    cout << "Числовой диапазон signed char: \t\t" << "от " << (CHAR_MIN & UCHAR_MAX) << "\t\t\t до " << CHAR_MAX << endl;
    cout << "Числовой диапазон signed short: \t" << "от " << (SHRT_MIN & USHRT_MAX) << "\t\t до " << SHRT_MAX << endl;
    cout << "Числовой диапазон signed int: \t\t" << "от " << (INT_MIN & UINT_MAX) << "\t\t до " << INT_MAX << endl;
    cout << "Числовой диапазон signed long long: \t" << "от " << LONG_LONG_MIN << "\t до " << LONG_LONG_MAX << endl;
    cout << endl;
    cout << "Числовой диапазон unsigned char: \t" << "от " << 0 << " до " << UCHAR_MAX << endl;
    cout << "Числовой диапазон unsigned short: \t" << "от " << 0 << " до " << USHRT_MAX << endl;
    cout << "Числовой диапазон unsigned int: \t" << "от " << 0 << " до " << UINT_MAX << endl;
    cout << "Числовой диапазон unsigned long long: \t" << "от " << 0 << " до " << ULONG_LONG_MAX << endl;

    cout << endl;
    cout << "Числовой диапазон signed char: \t\t" << "от " << bitset<8>(CHAR_MIN & UCHAR_MAX) << " до " << bitset<8>(CHAR_MAX) << endl;
    cout << "Числовой диапазон signed short: \t" << "от " << bitset<16>(SHRT_MIN & USHRT_MAX) << " до " << bitset<16>(SHRT_MAX) << endl;
    cout << "Числовой диапазон signed int: \t\t" << "от " << bitset<32>(INT_MIN & UINT_MAX) << " до " << bitset<32>(INT_MAX) << endl;
    cout << "Числовой диапазон signed long long: \t" << "от " << bitset<64>(LONG_LONG_MIN) << " до " << bitset<64>(LONG_LONG_MAX) << endl;
    cout << endl;
    cout << "Числовой диапазон unsigned char: \t" << "от " << bitset<8>(0) << " до " << bitset<8>(UCHAR_MAX) << endl;
    cout << "Числовой диапазон unsigned short: \t" << "от " << bitset<16>(0) << " до " << bitset<16>(USHRT_MAX) << endl;
    cout << "Числовой диапазон unsigned int: \t" << "от " << bitset<32>(0) << " до " << bitset<32>(UINT_MAX) << endl;
    cout << "Числовой диапазон unsigned long long: \t" << "от " << bitset<64>(0) << " до " << bitset<64>(ULONG_LONG_MAX) << endl;

#endif

#if TASK == 3
    cout << "Приложение для расчета среднего арефметического 10-ти чисел с плавающей точкой" << endl;
    cout << "Вводите последовательно числа" << endl;
    double total;
    double in;
    for(int i = 1; i < 11; i++){
        cout << "Число " << i << ": ";
        cin >> in;
        total += in;
    }
    cout << "Среднее арифметическое составляет: " << (total/10) << endl;
#endif

#if TASK == 4

    cout << "Экспонинцеальный вид отображения чисел";
    cout << scientific << endl;

    cout << "34.50 = " << 34.50 << endl;
    cout << "0.004000 = " << 0.004000 << endl;
    cout << "123.005 = "<< 123.005 << endl;
    cout << "146000 = " << static_cast<double>(146000) << endl;

#endif

#if TASK == 5
/*

(true && true) || false             true
(false && true) || true             true
(false && true) || false || true    true
(5 > 6 || 4 > 3) && (7 > 8)         false
!(7 > 6 || 3 > 4)                   false

*/

    cout << boolalpha;
    cout << "(true && true) || false : " << ((true && true) || false) << endl;
    cout << "(false && true) || true : " << ((false && true) || true) << endl;
    cout << "(false && true) || false || true : " << ((false && true) || false || true) << endl;
    cout << "(5 > 6 || 4 > 3) && (7 > 8) : " << ((5 > 6 || 4 > 3) && (7 > 8)) << endl;
    cout << "!(7 > 6 || 3 > 4) : " << (!(7 > 6 || 3 > 4)) << endl;
    cout << endl;

/*

(( _ && _ ) || ( !_) && (_||_))
((_ &&_ ) || (_&&_) || (!_))
((_ || _) && (_ || _) && (_||_))
((_ >_) && (_<_) && (_!=_))

*/
    const bool h = true;
    const bool l = false;
    constexpr bool h_e = true;
    constexpr bool l_e = false;
    #define H   true
    #define L   false
    enum my_enum {
        ZERO = 0,
        ONE,
        TWO,
        THREE,
        FOUR,
        FIVE
    };

    my_enum e_1 {my_enum::ONE};
    my_enum e_2 {my_enum::TWO};

    cout << "(( h && h ) || ( !l) && (h||l)) : " << ((( h && h ) || ( !l) && (h || l))) << endl;
    cout << "((h_e && l_e) || (h_e && h_e) || (!l_e)) : " << (((h_e && l_e) || (h_e && h_e) || (!l_e))) << endl;
    cout << "((H || L) && (L || H) && (H || H)) : " << (((H || L) && (L || H) && (H || H))) << endl;
    cout << "((e_true > e_false) && (e_false < e_true) && (e_true != e_false)) : " << ((e_2 > e_1) && (e_1 < e_2) && (e_1 != e_2)) << endl;
    cout << endl;

/*

не (a и b) = (не a) или (не b)
не (a или b) = (не a) и (не b)

*/
    bool a_b = true;
    bool b_b = true;

    if ((!(a_b & b_b)) == ((!a_b) || (!b_b))){
        cout << "Утверждение не (a и b) = (не a) или (не b) ВЕРНОЕ" << endl;
    }
    else {
        cout << "Утверждение не (a и b) = (не a) или (не b) НЕ ВЕРНОЕ" << endl;
    }
    if ((!(a_b || b_b)) == ((!a_b) & (!b_b))){
        cout << "Утверждение не (a или b) = (не a) и (не b) ВЕРНОЕ" << endl;
    }
    else {
        cout << "Утверждение не (a или b) = (не a) и (не b) НЕ ВЕРНОЕ" << endl;
    }

/*

1. x = 3 + 4 + 5;
2. x = y = z;
3. z *= ++y + 5;
4. logicValue = x || y && z || v.

*/
    cout << endl;
    int x, y, z, v;
    bool logicValue;
    cout << "Введите ниже 4 значения (целочисленных)" << endl;
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;
    cout << "Введите Z: ";
    cin >> z;
    cout << "Введите V: ";
    cin >> v;
    cout << endl;
    x = 3 + 4 + 5;
    cout << "Выполнено x = 3 + 4 + 5" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    x = y = z;
    cout << "Выполнено x = y = z" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    z *= ++y + 5;
    cout << "Выполнено z *= ++y + 5" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    logicValue = x || y && z || v;
    cout << "Выполнено logicValue = x || y && z || v" << endl;
    cout << "logicValue = " << logicValue << endl;
    cout << "Выражение logicValue = x || y && z || v будет false при Z = 0 и V = 0" << endl;
    cout << endl;

    cout << "Введите число от 0 до 16 : ";
    int number;
    cin >> number;
    cout << "Введите на сколько данное число необходимо сдвинуть влево : ";
    int shift;
    cin >> shift;
    number = number << shift;
    cout << "DEC: " << number << endl;
    cout << "BIN: " << bitset<32>(number) << endl;
    cout << "HEX: " << hex << uppercase << showbase << number << endl;
    cout << "OCT: " << oct << number << endl;
    cout << dec << endl;

/*

int res = a + b * 1 ? 128/5;
int res = a | b >> 1;
int res = a /b* k;

*/
    int a = 1;
    int b = 2;
    int k = 3;
    cout << "При a = 1, b = 2, k = 3" << endl;
    int res = a + b * 1 - 128/5;
    cout << "В выражении res = a + b * 1 - 128/5 res = " << res << endl;
    cout << "Приоритет операторов: умножение, деление, сложение, вычитание" << endl;
    res = a | b >> 1;
    cout << "В выражении res = a | b >> 1 res = " << res << endl;
    cout << "Приоритет операторов: сдвиг вправо, поитовое ИЛИ" << endl;
    res = a /b* k;
    cout << "В выражении res = a /b* k res = " << res << endl;
    cout << "Приоритет операторов: деление, умножение. Умножение и деление имеют левую ассоциативность и выполняются слева направо" << endl;

#endif

}
