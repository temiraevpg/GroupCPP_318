/*
���ࠡ�⠩� �ணࠬ��, ����� ���� 㯠�������� ����� � �㪢��� � ������
ॣ���� � ����⠭�������� �� ��� ��室��� ��ப� � �㪢��� � ���孥� ॣ����.

�।����������, �� �ணࠬ�� �ᯮ������ ���४⭮.
�室�� ����� �� �஢������� �� ���४⭮���!
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
