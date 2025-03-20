#include <iostream>
#include <tasks.h>

using namespace std;

void getAnimalName(Animal animal){
    switch (animal) {
    case Animal::pig:
        cout << "pig";
        break;

    case Animal::chicken:
        cout << "chicken";
        break;

    case Animal::goat:
        cout << "goat";
        break;

    case Animal::cat:
        cout << "cat";
        break;

    case Animal::dog:
        cout << "dog";
        break;

    default:
        cout << "unknown animal";
        break;
    }
    cout  << endl;
}

void printNumberOfLegs(Animal animal){
    switch (animal) {
    case Animal::chicken:
        cout << "two";
        break;

    case Animal::cat:
    case Animal::dog:
    case Animal::goat:
    case Animal::pig:
        cout << "four";
        break;

    default:
        cout << "unknown";
        break;
    }
    cout << " legs" << endl;
}
