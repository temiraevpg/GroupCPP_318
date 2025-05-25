> [!WARNING]
> a) неправильный код:

``` C++
#include <iostream>
int main() {
    short array[5]{1,3,5,7,9};
    short *ptr = array;
    *ptr = 111;
    for (int i = 0; i < sizeof(array); ++i)
        std::cout << array[i] << '\n';
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    short array[5]{1,3,5,7,9};
    short *ptr = array;
    *ptr = 111;
    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); ++i)
        std::cout << array[i] << '\n';
}
```


> [!WARNING]
> b) неправильный код:

``` C++
#include <iostream>
const int size = 5;
void Func(int *ptr, int size) {
    for (int i = 0; i < size; ++i)
        std::cout << *ptr[i] << '\n';
}
int main() {
    int array[size]{1,3,5,7,9};
    Func(&array, size);
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
const int size = 5;
void Func(int *ptr, int size) {
    for (int i = 0; i < size; ++i)
        std::cout << ptr[i] << '\n';
}
int main() {
    int array[size]{1,3,5,7,9};
    Func(array, size);
}
```


> [!WARNING]
> c) неправильный код:

``` C++
#include <iostream>
int main() {
short value;
short *p;
p = value;
*p = value;
*p = &value;
*p = *&value;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    short value;
    short *p;
    p = &value;
    *p = value;
    *p = value;
    *p = *&value;
}
```


> [!WARNING]
> d) неправильный код:

``` C++
#include <iostream>
int main() {
char cvalue;
int ivalue;
short * ps;
char *pc;
void *pv {(int*)(cvalue)};
void *pv_1 {(char*)(&ivalue)};
std::cout << "pv->int" << *static_cast<int>(pv) << std::endl;
int *pi = {(int)(pv)};
std::cout << "pi=" << pv_1 << std::endl;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>

int main() {
    char cvalue;
    int ivalue = 10;
    short * ps;
    char *pc;
    void *pv {(int*)(cvalue)};
    void *pv_1 {(char*)(&ivalue)};
    std::cout << "pv->int" << static_cast<int*>(pv) << std::endl;
    int *pi = {(int*)(pv)};
    std::cout << "pi=" << *(int*)pv_1 << std::endl;
}
```


> [!WARNING]
> e) неправильный код:

``` C++
#include <iostream>
int main() {
    short value, value1(3);
    short &ref;
    const short &ref1 = value;
    const short &ref2 = 78;
    ref1 = 3;
    *&value = 4;
    const *short const p3;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    short value, value1(3);
    short &ref = value1; - необходимо сразу инициализировать, это не указатель, который можно просто объявить
    short &ref1 = value1; // константный далее поменять не получится
    const short &ref2 = 78;
    ref1 = 3;
    *&value = 4;
    const short* const p3 = &ref2;
}
```


> [!WARNING]
> f) неправильный код:

``` C++
int main() {
    short value = 13;
    short value_1 = 100;
    short *ptr = &value;
    std::cout << &value << '\n';
    std::cout << (value +=1) << '\n';
    *ptr = 9;
    std::cout << (value = value_1 + *ptr) << '\n';
    std::cout << "Результат: " << value << '\n';
    return 0;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    short value = 13;
    short value_1 = 100;
    short *ptr = &value;
    std::cout << &value << '\n';
    std::cout << (value +=1) << '\n';
    *ptr = 9;
    std::cout << (value = value_1 + *ptr) << '\n';
    std::cout << "Результат: " << value << '\n';
    return 0;
}
```


> [!WARNING]
> g) неправильный код:

``` C++
int main() {
int value = 45;
int *ptr = &value;
*ptr = &value;
ptr = value;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    int value1 {45};
    int value2 {63};
    int *ptr = &value2;
    //*ptr = &value;
    //ptr = value;
    std::cout << "Результат value1 + value2 : " << value1 + *ptr << '\n';
}
```

Исправьте ошибки можно что-то добавлять а удалять нельзя. Что выведет программа:

> [!WARNING]
> a) неправильный код:

``` C++
int main() {
    std::cout << "Hi !\n";
    exit;
    std::cout << 3
} 
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    std::cout << "Hi !\n";
    std::cout << 3;
    exit(0);
} 
```


> [!WARNING]
> b) неправильный код:

``` C++
int main() {
    switch (2) {
    case 1
        std::cout << 1 << '\n';
        case 2
        std::cout << 2 << '\n'
        case
        std::cout << 3 << '\n';
        case 4
        std::cout << 4 << '\n'
        default:
        std::cout << 5 << '\n';
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main() {
    switch (2) {
        case 1:
            std::cout << 1 << '\n';
            break;
        case 2:
            std::cout << 2 << '\n';
            break;
        case 3:
            std::cout << 3 << '\n';
            break;
        case 4:
            std::cout << 4 << '\n';
            break;
        default:
            std::cout << 5 << '\n';
    }
}
```


> [!WARNING]
> c) неправильный код:

``` C++
#include <iostream>
const int size = 5;
void Func(int ptr, int size) {
    for (int i = 0; i < size; ++i)
        std::cout << ptr[i] << '\n'; // вывод элементов масива в цикле
    ptr = 5; // первому элементу массива присваиваем значение 5
    std::cout << '\n';
    for (int i = 0; i < size; ++i)
        std::cout << *ptr++ << '\n'; // вывод элементов масива в цикле
    *ptr = 55; // первому элементу массива присваиваем значение 55
    std::cout << '\n';
} 
int main() {
    int array[];
    Func(array, size);
    for (int i = 0; i < size; ++i)
    std::cout << array[i] << '\n';
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
const int size = 5;
void Func(int *ptr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << ptr[i] << '\n'; // вывод элементов масива в цикле
    }
    *ptr = 5; // первому элементу массива присваиваем значение 5
    std::cout << '\n';
    for (int i = 0; i < size; ++i) {
        std::cout << *ptr++ << '\n'; // вывод элементов масива в цикле
    }
    *(ptr-5) = 55; // первому элементу массива присваиваем значение 55
    std::cout << '\n';
}
int main() {
    int array[size] = {1, 2, 3, 4, 5};
    Func(array, size);
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << '\n';
    }
    system("pause");
}
```
