/*
Разработайте программу, которая берет упакованную строчку с буквами в нижнем
регистре и восстанавливает по ней исходную строку с буквами в верхнем регистре.

Предполагается, что программа используется корректно.
Входные данные не проверяются на корректность!
*/
#include <string>
#include <locale>

using namespace std;

string unpack(string encrypt) {
    setlocale(LC_ALL, "Russian_Russia.866");
    string out;
    int len;
    char symbol;
    for(size_t i = 0; i < encrypt.size(); i++) {
        len = 1;
        if(isdigit(encrypt[i])) {
            len = encrypt[i++]-'0';
        }
        symbol = toupper(encrypt[i]);
        out.append(len, symbol);
    }
    return out;
}
