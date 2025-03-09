> [!WARNING]
> 1) неправильный код:
``` C
#include <iostream>
nt main() {
int a ;
int 5 = 4;
int л = 4;
}
```

> [!TIP]
> исправленный код
``` C
#include <iostream>
int main() {
    /* сложно исправить то, что не несет смысла и не ясен замысел автора */
    int a;
    int a = 4;
    int l = a;
}
```

---

> [!NOTE]
> 2) Вывод програмы:

    a.  
        a.  3
        b.  3
        c.  6
        d.  3
        e.  Переменная не проинициализирована, размещена на стеке, неопределенное значение (мусор).
    b.
        1
    c.
        2
    d.
        Bit 1 has value: 1
        Bit 3 has value: 0
        Bit 7 has value: 0
        All the bits: 00000001
    e.
        a: 2 
        b: 2 
        c: 3
    f.
        int x = (08); ошибка, максимум 7 в восьмиричной
        y: 5
        bin 0b101: 5
    g.
        hex: 8
        oct: 10
        dec: 8

---

> [!NOTE]
> 3) Вычислите следующие выражения:

    a.
        - (true && true) || false             -   true
        - (false && true) || true             -   true
        - (false && true) || false || true    -   true
        - (5 > 6 || 4 > 3) && (7 > 8)         -   false
        - !(7 > 6 || 3 > 4)                   -   false
    b.
        - 0001
    c.
        - 4
    d.
        - 9
    e.
        - 77


        