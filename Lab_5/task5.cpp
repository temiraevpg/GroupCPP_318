/*
���� ��ப� (���ᨬ��쭮 100 ᨬ�����), ᮤ�ঠ�� ᫮��, ࠧ������� ����� ���
��᪮�쪨�� �஡�����, ��� ������� ⠡��樨. �������� �� ����� ⠡��樨 ������
�஡���, 㤠���� ������ �஡��� �� ��ப�.
*/

#include <string>

using namespace std;

string normalize(string str) {
    string out;
    char symbol = str[0];
    for(size_t i = 0; i < str.size(); i++) {
        if(str[i] == '\t' || str[i] == ' ') {
            if(symbol == ' ') continue;
            symbol = ' ';
        }
        else {
            symbol = str[i];
        }
        out.push_back(symbol);
    }
    return out;
}
