#include <iostream>

using namespace std;

int bss_variable;
int data_variable{1};

void print_hi() {
    cout << "Hi!";
}

void print_adress(void *adr) {
    cout << adr;
    cout << '\n';
}

void task1(void* adr) {
    int stack_variable;
    int stack_buf[] = {0, 1, 2, 3, 4};
    static int static_buf[] = {5, 6, 7, 8, 9};

    cout << "адресс main = ";
    print_adress(adr);

    cout << "адрес функции = ";
    print_adress((void*)&print_hi);

    cout << "адрес переменной созданной в стэке = ";
    print_adress(&stack_variable);

    cout << "aдpecа и значения элементов массива созданного в стэке (выведите в цикле): \n";
    for(auto i = 0; i < sizeof(stack_buf)/sizeof(stack_buf[0]); i++) {
        cout << &stack_buf[i] << " - ";
        cout << stack_buf[i] << '\n';
    }

    cout << "адрес переменной в статической памяти в секции .bss = ";
    cout << &bss_variable << '\n';

    cout << "адрес переменной в статической памяти в секции .data = ";
    cout << &data_variable << '\n';

    cout << "адpecа и значения элементов массива созданного в статической памяти (выведите в цикле): \n";
    for(auto i = 0; i < sizeof(static_buf)/sizeof(static_buf[0]); i++) {
        cout << &static_buf[i] << " - ";
        cout << static_buf[i] << '\n';
    }

    int *heap_variable = new int(5);
    cout << "адрес переменной созданной в куче = ";
    cout << heap_variable << '\n';
    delete heap_variable;

    int *heap_buf = new int[]{10, 11, 12, 13, 14};
    cout << "aдpecа и значения элементов массива созданного в куче (выведите в цикле): \n";
    for(auto i = 0; i < sizeof(static_buf)/sizeof(static_buf[0]); i++) {
        cout << &heap_buf[i] << " - ";
        cout << heap_buf[i] << '\n';
    }
    delete[] heap_buf;
}
