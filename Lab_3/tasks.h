#ifndef TASKS_H
#define TASKS_H

enum class Animal{
    pig,
    chicken,
    goat,
    cat,
    dog
};

double probability(unsigned short total, unsigned short result);

void printChar(int a='a', char b='b', char c='c', char d='d');

auto initializatoin(void) -> void;

void getAnimalName(Animal animal);

void printNumberOfLegs(Animal animal);

void test_all(void);

void task6(void);

void elevator(void);

#endif // TASKS_H
