/*
 *  ������ୠ� ࠡ�� N1
 *  ��᫥������� �++ �������ਥ�, ������⥪� �����-�뢮�� � IDE (��⥣�஢�����
 *  �।� ࠧࠡ�⪨) Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  locale:     IBM866
*/

#include <iostream>
#include <iomanip>
using namespace std;

#if 0
    �롮� ������� ��� ᡮન �१ ��ਪ⨢� �९����� STAGE == 1 ... 3
#endif

#define STAGE   1

int main(){

#if STAGE == 1  // ���� ���� �ணࠬ�
    std::cout << "����� ��㯯� 318, 䠪���� �������⥫쭮�� ��ࠧ������" << std::endl;
    std::cout << "���ࠡ��稪� �ணࠬ�� 1. ����ࠥ� ���� ���ࣨ����" << std::endl;
    std::cout << setw(23) << "" << "2. ______________" << std::endl;
    std::cout << "����� ������୮� ࠡ��� 1" << std::endl;
    std::cout << endl;
/*
 *
 * ��� �ணࠬ��:
 * 67�� - debug
 * 17�� - release
 *
 */
#endif

#if STAGE == 2  // ��ன ���� �ணࠬ�
    cout << "*****" << setw(35) << "�����"  << setw(35) << "*****" << endl;
    cout << endl;
    cout << endl;
    cout << setw(45) << "" <<"�������: ���. ��ࠧ������" << endl;
    cout << setw(45) << "" << "��㯯�: 318" << endl;
    cout << setw(45) << "" << "��㤥��: ����ࠥ� ����" << endl;
    cout << endl;
    cout << setw(32) << "" << "���� 2025" << endl;
#endif

#if STAGE == 3 // ��⨩ ���� �ணࠬ�
    cout << "���᫥��� ᪮��� ��אַ��������� �������� (�� ����ﭨ� � �६���)." << endl;
    cout << "������ ����ﭨ�: ";
    double AllDistance;
    cin >> AllDistance;
    cout << "������ �६�: ";
    double AllTime;
    cin >> AllTime;
    cout << "������� ��אַ��������� ��������: " << AllDistance/AllTime << endl;
    cout << endl;

    cout << "���᫥��� �᪮७�� (�� ��砫쭮� ᪮���, ����筮� ᪮��� � �६���)." << endl;
    cout << "������ ��砫��� ᪮����: ";
    double InitialSpeed;
    cin >> InitialSpeed;
    cout << "������ ������� ᪮����: ";
    double FinalSpeed;
    cin >> FinalSpeed;
    cout << "������ �६�: ";
    double TotalTime;
    cin >> TotalTime;
    cout << "���᫥���� �᪮७��: ";
    cout << (FinalSpeed-InitialSpeed)/TotalTime << endl;
    cout << endl;

    cout << "���᫥��� ࠤ��� ��㣠 (�� ����� ��� ���㦭���)." << endl;
    cout << "������ ����� ���㦭���: ";
    double CircleLen;
    cin >> CircleLen;
    cout << "������ ��㣠: " << CircleLen*3.14159265 << endl;

#endif
}
