#include <iostream>

using namespace std;

void print_ASCII(void){
    cout << "‘ˆŒ‚Ž‹" << "\tŠŽ„" << '\n';
    for(char symbol = 'a'; symbol < ('z' + 1); symbol++){
        cout << "  " << symbol << '\t' << static_cast<int>(symbol) << '\n';
    }
}
