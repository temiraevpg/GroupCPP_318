#include <iostream>

using namespace std;

constexpr int phase_len = 5;
char phase_buf[phase_len]{'U','V','W','N','\0'};

void swap_phase(char &a, char &b){
    char tmp = a;
    a = b;
    b = tmp;
}


void phase(char *str, int start, int end){
    if(start == end) {
        cout << str << '\n';
    }
    else {
        for (int i = start; i <= end; i++) {
            swap_phase(str[start], str[i]);
            phase(str, start + 1, end);
            swap_phase(str[start], str[i]);
        }
    }
}

void phase_test(void) {
    phase(phase_buf, 0, 3);
}
