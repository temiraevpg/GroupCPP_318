/*
Дана строка (максимально 100 символов), содержащая слова, разделенные одним или
несколькими пробелами, или знаками табуляции. Заменить все знаки табуляции знаком
пробела, удалить двойные пробелы из строки.
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
