#include <tasks.h>
#include <iostream>
#include <cstdlib> // ��� �㭪権 rand() � srand()
#include <ctime> // ��� �㭪樨 time()

bool bool_matrix[BOOL_MATRIX_SIZE][BOOL_MATRIX_SIZE]{};
int random_matrix[RANDOM_MATRIX_SIZE][RANDOM_MATRIX_SIZE];

using namespace std;

void create_matrix(bool *buf, unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        *((buf+i)+i*size) = 1;
    }
}

void print_bool_matrix(bool *buf, unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        for(unsigned int j = 0; j < size; j++){
            cout << *buf++ << " ";
        }
        cout << '\n';
    }
}

// ������㥬 ࠭������ �᫮ ����� ���祭�ﬨ min � max.
int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void fill_random(int *buf, unsigned int size, int min, int max){
    srand(static_cast<unsigned int>(time(0))); // ��⠭�������� ���祭�� ��⥬��� �ᮢ � ����⢥ ���⮢��� �᫠
    for(unsigned int i = 0; i < size; i++){
        for(unsigned int j = 0; j < size; j++){
            *buf++ = getRandomNumber(min, max);
        }
    }
}

void print_matrix(int *buf, unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        for(unsigned int j = 0; j < size; j++){
            cout << *buf++ << '\t';
        }
        cout << '\n';
    }
}

int calculate_summ(int *buf, unsigned int size){
    int summ = 0;
    for(unsigned int i = 0; i < size; i++){
        for(unsigned int j = 0; j < size; j++){
            if(i < j) summ += *buf++;
            else buf++;
        }
    }
    return summ;
}
