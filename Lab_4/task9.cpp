#include <iostream>

using namespace std;

constexpr unsigned int buffer_size = 12;

char buffer[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};

void swap_even_and_odd(char* buf, unsigned int len) {
    if(len % 2) {
        cout << "Буфер должен иметь четную длину !\n";
    }
    else {
        char temp;
        for(unsigned int i = 0; i < len; i += 2) {
            temp = *buf;
            *buf++ = *(buf+1);
            *buf++ = temp;
        }
    }
}

void task_9(void) {
    cout << buffer << '\n';
    swap_even_and_odd(buffer, buffer_size);
    cout << buffer << '\n';
}
