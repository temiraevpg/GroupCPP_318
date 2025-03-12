/*
 *  ������ୠ� ࠡ�� N2
 *  ��᫥������� ⨯�� ������, ���ᥬ � IDE (��⥣�஢����� �।� ࠧࠡ�⪨) Qt Creator
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
 * �� ��६����� char ��� ������ �⠭������ ���������� ����� ���
 * �訡�� ������ �᫨ ������ ����� 1 ����, ����⭮ ��-�� ᨬ���� ��ॢ��� ���⪨
 * ��� �஢�ન �訡�� LOL -> 1
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
    cout << "�������� ��� ���� �����쭮�� ���" << endl;
    cout << endl;
    cout << "������ ������ (������ ���): ";
#if LOL == 0
    short age;
#elif LOL == 1
    char age;
#endif
    cin >> age;
    cout << "������ ��� (�����ࠬ��): ";
    short weight;
    cin >> weight;
    cout << "������ ��� (ᠭ⨬����): ";
    short height;
    cin >> height;
    cout << "������ ��� (��稭� 1, ���騭� 0): ";
    bool gender;
    cin >> gender;
    cout << "������ ��⮤ ���� �����쭮�� ���:" << endl;
    cout << "\ta - �� ��㫥 �ப�" << endl;
    cout << "\tb - �� ������� ����� ⥫� (���)" << endl;
    cout << "\t� - �� ������� ����� ⥫� (���) � ��⮬ ������" << endl;
    cout << "��⮤: ";
    char method;
    cin >> method;

    if (method == 'a') {
        if (gender) {   // �᫨ ��稭�
            cout << "��� ������� ��� �� ��㫥 �ப�: " << ((height-100)*0.9) << " ��." << endl;
        }
        else {
            cout << "��� ������� ��� �� ��㫥 �ப�: " << ((height-100)*0.85) << " ��." << endl;
        }
    }

    double imt = weight/pow(static_cast<double>(height)/100, 2);

    if (method == 'b') {
        cout << "�����᭮ ��� � ��� ";
        if (imt <= level_1b) {
            cout << "��ࠦ���� ����� �����.";
        }
        else if (imt > level_1b and imt <= level_2b) {
            cout << "�������筠� (�����) ���� ⥫�.";
        }
        else if (imt > level_2b and imt <= level_3b) {
            cout << "��ଠ�쭠� ���� ⥫�.";
        }
        else if (imt > level_3b and imt <= level_4b) {
            cout << "�����筠� ���� ⥫� (�।���७��).";
        }
        else if (imt > level_4b and imt <= level_5b) {
            cout << "���७�� ��ࢮ� �⥯���.";
        }
        else if (imt > level_5b and imt <= level_6b) {
            cout << "���७�� ��ன �⥯���.";
        }
        else {
            cout << "���७�� ���쥩 �⥯��� (��ࡨ����).";
        }
    }

    if (method == 'c') {
        cout << "�����᭮ ��� � ��⮬ ������ � ��� ";
        if (age >= age_1 and age < age_2) {
            if (gender) {   // �᫨ ��稭�
                if (imt < level_1c_male) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_1c_male and imt < level_1c_male + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < level_1c_female) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_1c_female and imt < level_1c_female + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= age_2 and age < age_3) {
            if (gender) {   // �᫨ ��稭�
                if (imt < level_2c_male) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_2c_male and imt < level_2c_male + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < level_2c_female) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_2c_female and imt < level_2c_female + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= age_3 and age < age_4) {
            if (gender) {   // �᫨ ��稭�
                if (imt < level_3c_male) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_3c_male and imt < level_3c_male + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < level_3c_female) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_3c_female and imt < level_3c_female + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= age_4 and age < age_5) {
            if (gender) {   // �᫨ ��稭�
                if (imt < level_4c_male) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_4c_male and imt < level_4c_male + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < level_4c_female) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_4c_female and imt < level_4c_female + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if ( age >= age_5) {
            if (gender) {   // �᫨ ��稭�
                if (imt < level_5c_male) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_5c_male and imt < level_5c_male + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < level_6c_female) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= level_6c_female and imt < level_6c_female + SHIFT) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
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
    cout << "��᫮��� �������� signed char: \t\t" << "�� " << CHAR_MIN << "\t\t\t �� " << CHAR_MAX << endl;
    cout << "��᫮��� �������� signed short: \t" << "�� " << SHRT_MIN << "\t\t �� " << SHRT_MAX << endl;
    cout << "��᫮��� �������� signed int: \t\t" << "�� " << INT_MIN << "\t\t �� " << INT_MAX << endl;
    cout << "��᫮��� �������� signed long long: \t" << "�� " << LONG_LONG_MIN << "\t �� " << LONG_LONG_MAX << endl;
    cout << endl;
    cout << "��᫮��� �������� unsigned char: \t" << "�� " << 0 << " �� " << UCHAR_MAX << endl;
    cout << "��᫮��� �������� unsigned short: \t" << "�� " << 0 << " �� " << USHRT_MAX << endl;
    cout << "��᫮��� �������� unsigned int: \t" << "�� " << 0 << " �� " << UINT_MAX << endl;
    cout << "��᫮��� �������� unsigned long long: \t" << "�� " << 0 << " �� " << ULONG_LONG_MAX << endl;

    cout << hex << uppercase << showbase << endl;
    cout << "��᫮��� �������� signed char: \t\t" << "�� " << (CHAR_MIN & UCHAR_MAX) << "\t\t\t �� " << CHAR_MAX << endl;
    cout << "��᫮��� �������� signed short: \t" << "�� " << (SHRT_MIN & USHRT_MAX) << "\t\t �� " << SHRT_MAX << endl;
    cout << "��᫮��� �������� signed int: \t\t" << "�� " << (INT_MIN & UINT_MAX) << "\t\t �� " << INT_MAX << endl;
    cout << "��᫮��� �������� signed long long: \t" << "�� " << LONG_LONG_MIN << "\t �� " << LONG_LONG_MAX << endl;
    cout << endl;
    cout << "��᫮��� �������� unsigned char: \t" << "�� " << 0 << " �� " << UCHAR_MAX << endl;
    cout << "��᫮��� �������� unsigned short: \t" << "�� " << 0 << " �� " << USHRT_MAX << endl;
    cout << "��᫮��� �������� unsigned int: \t" << "�� " << 0 << " �� " << UINT_MAX << endl;
    cout << "��᫮��� �������� unsigned long long: \t" << "�� " << 0 << " �� " << ULONG_LONG_MAX << endl;

    cout << endl;
    cout << "��᫮��� �������� signed char: \t\t" << "�� " << bitset<8>(CHAR_MIN & UCHAR_MAX) << " �� " << bitset<8>(CHAR_MAX) << endl;
    cout << "��᫮��� �������� signed short: \t" << "�� " << bitset<16>(SHRT_MIN & USHRT_MAX) << " �� " << bitset<16>(SHRT_MAX) << endl;
    cout << "��᫮��� �������� signed int: \t\t" << "�� " << bitset<32>(INT_MIN & UINT_MAX) << " �� " << bitset<32>(INT_MAX) << endl;
    cout << "��᫮��� �������� signed long long: \t" << "�� " << bitset<64>(LONG_LONG_MIN) << " �� " << bitset<64>(LONG_LONG_MAX) << endl;
    cout << endl;
    cout << "��᫮��� �������� unsigned char: \t" << "�� " << bitset<8>(0) << " �� " << bitset<8>(UCHAR_MAX) << endl;
    cout << "��᫮��� �������� unsigned short: \t" << "�� " << bitset<16>(0) << " �� " << bitset<16>(USHRT_MAX) << endl;
    cout << "��᫮��� �������� unsigned int: \t" << "�� " << bitset<32>(0) << " �� " << bitset<32>(UINT_MAX) << endl;
    cout << "��᫮��� �������� unsigned long long: \t" << "�� " << bitset<64>(0) << " �� " << bitset<64>(ULONG_LONG_MAX) << endl;

#endif

#if TASK == 3
    cout << "�ਫ������ ��� ���� �।���� ��䬥��᪮�� 10-� �ᥫ � ������饩 �窮�" << endl;
    cout << "������ ��᫥����⥫쭮 �᫠" << endl;
    double total;
    double in;
    for(int i = 1; i < 11; i++){
        cout << "��᫮ " << i << ": ";
        cin >> in;
        total += in;
    }
    cout << "�।��� ��䬥��᪮� ��⠢���: " << (total/10) << endl;
#endif

#if TASK == 4

    cout << "��ᯮ���楠��� ��� �⮡ࠦ���� �ᥫ";
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

�� (a � b) = (�� a) ��� (�� b)
�� (a ��� b) = (�� a) � (�� b)

*/
    bool a_b = true;
    bool b_b = true;

    if ((!(a_b & b_b)) == ((!a_b) || (!b_b))){
        cout << "�⢥ত���� �� (a � b) = (�� a) ��� (�� b) ������" << endl;
    }
    else {
        cout << "�⢥ত���� �� (a � b) = (�� a) ��� (�� b) �� ������" << endl;
    }
    if ((!(a_b || b_b)) == ((!a_b) & (!b_b))){
        cout << "�⢥ত���� �� (a ��� b) = (�� a) � (�� b) ������" << endl;
    }
    else {
        cout << "�⢥ত���� �� (a ��� b) = (�� a) � (�� b) �� ������" << endl;
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
    cout << "������ ���� 4 ���祭�� (楫��᫥����)" << endl;
    cout << "������ X: ";
    cin >> x;
    cout << "������ Y: ";
    cin >> y;
    cout << "������ Z: ";
    cin >> z;
    cout << "������ V: ";
    cin >> v;
    cout << endl;
    x = 3 + 4 + 5;
    cout << "�믮����� x = 3 + 4 + 5" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    x = y = z;
    cout << "�믮����� x = y = z" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    z *= ++y + 5;
    cout << "�믮����� z *= ++y + 5" << endl;
    cout << "X = " << x << " Y = " << y << " Z = " << z << " V = " << v << endl;
    logicValue = x || y && z || v;
    cout << "�믮����� logicValue = x || y && z || v" << endl;
    cout << "logicValue = " << logicValue << endl;
    cout << "��ࠦ���� logicValue = x || y && z || v �㤥� false �� Z = 0 � V = 0" << endl;
    cout << endl;

    cout << "������ �᫮ �� 0 �� 16 : ";
    int number;
    cin >> number;
    cout << "������ �� ᪮�쪮 ������ �᫮ ����室��� ᤢ����� ����� : ";
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
    cout << "�� a = 1, b = 2, k = 3" << endl;
    int res = a + b * 1 - 128/5;
    cout << "� ��ࠦ���� res = a + b * 1 - 128/5 res = " << res << endl;
    cout << "�ਮ��� �����஢: 㬭������, �������, ᫮�����, ���⠭��" << endl;
    res = a | b >> 1;
    cout << "� ��ࠦ���� res = a | b >> 1 res = " << res << endl;
    cout << "�ਮ��� �����஢: ᤢ�� ��ࠢ�, ���⮢�� ���" << endl;
    res = a /b* k;
    cout << "� ��ࠦ���� res = a /b* k res = " << res << endl;
    cout << "�ਮ��� �����஢: �������, 㬭������. ��������� � ������� ����� ����� ���樠⨢����� � �믮������� ᫥�� ���ࠢ�" << endl;

#endif

}
