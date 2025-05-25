#include <random> // для std::random_device и std::mt19937

/*
 * Для всех функций параметр len > 0
 */
#include <tasks.h>

unsigned int mersenne_buf[MERSENNE_BUF_SIZE];
unsigned int my_buf[MERSENNE_BUF_SIZE];

int my_random() {
    int result;
    int* x = &result;
    // число в стеке, стек заполняется в вверх и теоретически выше по адресу при определенных условиях могут оказаться нули
    // но ниже будут данные помещенные до вызова этой функции

    int a = *(--x);
    int b = *(--x);
    result = (a * b) + a + b;
    return result;
}

void fill_buf(unsigned int *buf, unsigned int len){
    std::random_device rd;
    std::mt19937 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом
    do{
        *buf++ = mersenne();
    }while(--len);
}

void fill_my_buf(unsigned int *buf, unsigned int len){
    do{
        *buf++ = my_random();
    }while(--len);
}

unsigned int max_ret(unsigned int *buf, unsigned int len){
    unsigned int max = *buf;
    for(unsigned int i = 1; i < len; i++){
        if(max < *++buf) max = *buf;
    }
    return max;
}

unsigned int min_ret(unsigned int *buf, unsigned int len){
    unsigned int min = *buf;
    for(unsigned int i = 1; i < len; i++){
        if(min > *++buf) min = *buf;
    }
    return min;
}
