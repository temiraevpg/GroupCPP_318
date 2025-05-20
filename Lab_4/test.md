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
> Повторяет С???

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
    //short &ref; - необходимо сразу инициализировать, это не указатель, который можно просто объявить
    short &ref1 = value1; // константный далее поменять не получится
    const short &ref2 = 78;
    ref1 = 3;
    *&value = 4;
    //const *short const p3; - не ясен замысел
}
```


> [!WARNING]
> f) неправильный код:

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

> [!TIP]
> исправленный код

``` C++
Все работает ???
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
int main() {
    int value = 45;
    int *ptr = &value;
    *ptr = value;
}
```