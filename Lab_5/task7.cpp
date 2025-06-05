#include <string>

using namespace std;

string int_to_str(int x) {
    if(x == 0) {
        return "0";
    }

    string out;
    char sign;

    if(x < 0){
        sign = '-';
        x = -x;
    }
    else {
        sign = '+';
    }

    while (x > 0) {
        char digit = 48 + (x % 10);
        out = digit + out;
        x /= 10;
    }
    out = sign + out;

    return out;
}

int str_to_int(string str) {
    int x = 0;
    bool sign = false;              // true - отрицательное число
    size_t i = 0;
    if(str[0] == '-') {
        sign = true;
        i++;
    }
    else if(str[0] == '+') {
        i++;
    }

    for(; i < str.size(); i++) {
        x = (x * 10) + str[i] - 48;

    }

    if(sign) {
        x = -x;
    }
    return x;
}
