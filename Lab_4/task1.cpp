#include <random> // для std::random_device и std::mt19937

/*
 * Для всех функций параметр len > 0
 */
#include <tasks.h>

unsigned int mersenne_buf[MERSENNE_BUF_SIZE];

void fill_buf(unsigned int *buf, unsigned int len){
    std::random_device rd;
    std::mt19937 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом
    do{
        *buf++ = mersenne();
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
