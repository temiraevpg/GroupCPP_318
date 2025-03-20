#include <iostream>

using namespace std;

int min(int a, int b) {
  return (a < b) ? a : b;
}

int max(int a, int b) {
  return (a > b) ? a : b;
}

unsigned short min(unsigned short a, unsigned short b) {
  return (a < b) ? a : b;
}

unsigned short max(unsigned short a, unsigned short b) {
  return (a > b) ? a : b;
}

int min(int a, int b, int limit) {
  int result = (a < b) ? a : b;
  return (result < limit) ? limit : result;
}

int max(int a, int b, int limit) {
  int result = (a > b) ? a : b;
  return (result > limit) ? limit : result;
}

void test_all(void){
    for(int i = 0; i < 6; i++){
        int a;
        int b;
        int c;
        cout << "Введите числа:" << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;

        switch (i) {
        case 0:
            cout << "(int) min = " << min(a, b) << endl;
            break;

        case 1:
            cout << "(int) max = " << max(a, b) << endl;
            break;

        case 2:
            cout << "(unsigned short) min = " << min(static_cast<unsigned short>(a), static_cast<unsigned short>(b)) << endl;
            break;

        case 3:
            cout << "(unsigned short) max = " << max(static_cast<unsigned short>(a), static_cast<unsigned short>(b)) << endl;
            break;

        case 4:
            cout << "limit = ";
            cin >> c;
            cout << "(int) min с лимитом = " << min(a, b, c) << endl;
            break;

        case 5:
            cout << "limit = ";
            cin >> c;
            cout << "(int) max с лимитом = " << max(a, b, c) << endl;
            break;

        default:
            break;
        }
        cout << endl;
    }

}
