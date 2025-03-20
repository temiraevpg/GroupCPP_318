#include <iostream>

using namespace std;

int number{100};

auto initializatoin(void) -> void{
    int iValue = 1;
    bool bValue = true;
    char cValue = '1';
    long lValue = 1L;

    cout << "‘opy initialization:" << endl;
    cout << "iValue = " << iValue;
    cout << " bValue = " << bValue;
    cout << " cValue = " << cValue;
    cout << " lValue = " << lValue << endl;

    int iValue1(2);
    bool bValue1(true);
    char cValue1('2');
    long lValue1(2L);

    cout << "Direct initialization:" << endl;
    cout << "iValue = " << iValue1;
    cout << " bValue = " << bValue1;
    cout << " cValue = " << cValue1;
    cout << " lValue = " << lValue1 << endl;

    int iValue2{3};
    bool bValue2{true};
    char cValue2{'3'};
    long lValue2{3L};

    cout << "Uniform initialization:" << endl;
    cout << "iValue = " << iValue2;
    cout << " bValue = " << bValue2;
    cout << " cValue = " << cValue2;
    cout << " lValue = " << lValue2 << endl;

    auto iValue3{3};
    auto bValue3{true};
    auto cValue3{'3'};
    auto lValue3{3L};

    cout << "Auto initialization:" << endl;
    cout << "iValue = " << iValue3;
    cout << " bValue = " << bValue3;
    cout << " cValue = " << cValue3;
    cout << " lValue = " << lValue3 << endl;

    cout << "Global " << number << endl;

    int number{200};
    cout << "Local " << number << endl;

}
