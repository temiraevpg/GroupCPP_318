#include <iostream>
#include <cmath>
#include <limits>
#include <bitset>

using namespace std;

#define TASK    5

int main()
{
#if TASK == 1
    cout << "�������� ��� ���� �����쭮�� ���" << endl;
    cout << endl;
    cout << "������ ������ (������ ���): ";
    char age;
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
        if (imt <= 16) {
            cout << "��ࠦ���� ����� �����.";
        }
        else if (imt > 16 and imt <= 18.5) {
            cout << "�������筠� (�����) ���� ⥫�.";
        }
        else if (imt > 18.5 and imt <= 25) {
            cout << "��ଠ�쭠� ���� ⥫�.";
        }
        else if (imt > 25 and imt <= 30) {
            cout << "�����筠� ���� ⥫� (�।���७��).";
        }
        else if (imt > 30 and imt <= 35) {
            cout << "���७�� ��ࢮ� �⥯���.";
        }
        else if (imt >35 and imt <= 40) {
            cout << "���७�� ��ன �⥯���.";
        }
        else {
            cout << "���७�� ���쥩 �⥯��� (��ࡨ����).";
        }
    }

    if (method == 'c') {
        cout << "�����᭮ ��� � ��⮬ ������ � ��� ";
        if (age >= 19 and age < 25) {
            if (gender) {   // �᫨ ��稭�
                if (imt < 21.4) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 21.4 and imt < 21.4+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < 19.5) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 19.5 and imt < 19.5+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= 25 and age < 35) {
            if (gender) {   // �᫨ ��稭�
                if (imt < 21.6) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 21.6 and imt < 21.6+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < 23.2) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 23.2 and imt < 23.2+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= 35 and age < 45) {
            if (gender) {   // �᫨ ��稭�
                if (imt < 22.9) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 22.9 and imt < 22.9+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < 23.4) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 23.4 and imt < 23.4+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if (age >= 45 and age < 55) {
            if (gender) {   // �᫨ ��稭�
                if (imt < 25.8) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 25.8 and imt < 25.8+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < 25.2) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 25.2 and imt < 25.2+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
        }
        else if ( age >= 55) {
            if (gender) {   // �᫨ ��稭�
                if (imt < 26.6) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 26.6 and imt < 26.6+5) {
                    cout << "��ଠ�쭠� ���� ⥫�.";
                }
                else {
                    cout << "�����筠� ���� ⥫� (�।���७��).";
                }
            }
            else  {
                if (imt < 27.3) {
                    cout << "�������筠� (�����) ���� ⥫�.";
                }
                else if (imt >= 27.3 and imt < 27.3+5) {
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
