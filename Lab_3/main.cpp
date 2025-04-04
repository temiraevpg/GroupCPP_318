/*
 *  ������ୠ� ࠡ�� N3
 *  ��᫥������� �㭪権 �++ � IDE (��⥣�஢����� �।� ࠧࠡ�⪨) Qt Creator
 *
 *  Developer:  Temiraev Petr
 *  OS:         Windows 11
 *  locale:     IBM866
*/

#include <iostream>
#include <tasks.h>

#define UNIT    6

int main()
{
    using namespace std;

#if UNIT == 1
    cout << "������� 1" << endl;
    cout << "����⭮��� ������ �� �� ������ � 52 �����: " << probability(52, 4) << endl;
    cout << endl;
    cout << "����⭮���, �� �㬬� �믠��� �窮� ��� �㡨��� � 6 ��஭��� �㤥� ࠢ�� 7: " << probability(36, 6) << endl;
    cout << endl;
    cout << "����⭮��� ��砩��� �ᯮ������� �㪢 �, �, �, � � �� � ᫮�� ����: " << probability(6, 1) << endl;

#elif UNIT == 2
    cout << "������� 2" << endl;
    /*
     * � ����� �뢮����� �� ��㬥��� (������ ��㬥��� �� 㬮�砭��);
    */
    printChar();
    printChar(65);
    printChar(65, 66);
    printChar(65, 66, 67);
    printChar(65, 66, 67, 68);
#elif UNIT == 3
    initializatoin();
#elif UNIT == 4
    getAnimalName(Animal::cat);
    printNumberOfLegs(Animal::cat);
    cout << endl;
    getAnimalName(Animal::chicken);
    printNumberOfLegs(Animal::chicken);
    cout << endl;
    /*
     * ������� ��મ����� ��� �뢮�� ������������
    */
    getAnimalName(static_cast<Animal>(5));
    printNumberOfLegs(static_cast<Animal>(5));
#elif UNIT == 5
    /*
     * �� �஢�થ ��᫥����⥫쭮 ��ॡ������ �㭪樨:
     * min(a, b)
     * max(a, b)
     * unsigned short min(a, b)
     * unsigned short max(a, b)
     * min(a, b, limit)
     * max(a, b, limit)
     */
    test_all();
#elif UNIT == 6
    task6();
#elif UNIT == 7
    elevator();
#endif
    system("pause");
}
