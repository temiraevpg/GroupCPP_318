/*
Разработайте программу, которая берет упакованную строчку с буквами в нижнем
регистре и восстанавливает по ней исходную строку с буквами в верхнем регистре.

Предполагается, что программа используется корректно.
Входные данные не проверяются на корректность!
*/
#include <string>
using namespace std;

string unpack(string encrypt) {
    string out;
    int len;
    char symbol;
    for(size_t i = 0; i < encrypt.size(); i++) {
        len = 1;
        if(encrypt[i] > '1' && encrypt[i] < ':') {
            len = encrypt[i++]-48;
        }
        symbol = encrypt[i]-32;
        out.append(len, symbol);
    }
    return out;
}
