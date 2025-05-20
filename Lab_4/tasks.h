#ifndef TASKS_H
#define TASKS_H

/* первая задача */
#define MERSENNE_BUF_SIZE   10
extern unsigned int mersenne_buf[MERSENNE_BUF_SIZE];

void fill_buf(unsigned int *buf, unsigned int len);
unsigned int max_ret(unsigned int *buf, unsigned int len);
unsigned int min_ret(unsigned int *buf, unsigned int len);

/* вторая задача */
#define BOOL_MATRIX_SIZE    5
#define RANDOM_MATRIX_SIZE  8
#define MIN_RANDOM          -15
#define MAX_RANDOM          15
extern bool bool_matrix[BOOL_MATRIX_SIZE][BOOL_MATRIX_SIZE];
extern int random_matrix[RANDOM_MATRIX_SIZE][RANDOM_MATRIX_SIZE];

void create_matrix(bool *buf, unsigned int size);
void print_bool_matrix(bool *buf, unsigned int size);
int getRandomNumber(int min, int max);
void fill_random(int *buf, unsigned int size, int min, int max);
void print_matrix(int *buf, unsigned int size);
int calculate_summ(int *buf, unsigned int size);

/* третья задача */
void print_ASCII(void);

/* четвертая задача */
unsigned int iteration_factorial(int n);
unsigned int recursion_factorial(int n);
unsigned int iteration_fibonacci(int number);
void print_piramid(int n);

/* пятая задача */
void multi_massive(void);

/* шестая задача */
void task_6a(void);
void task_6b(void);

/* седьмая задача */
void phase_test(void);

/* восьмая задача */
void ptr_func(void);

/* девятая задача */
void task_9(void);

#endif // TASKS_H
