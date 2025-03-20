> [!WARNING]
> a) неправильный код:
``` C++
#include <iostream>
int return 5(){
return 5;
}
int return8(){
return;
}
int main(){
std::cout << (return5() + return8() ) << std::endl;
return 0
}
```

> [!TIP]
> исправленный код

> Вывод: 13
``` C++
#include <iostream>

int return5(){
  return 5;
}

int return8(){
  return 8;
}

int main(){
  std::cout << (return5() + return8()) << std::endl;
  return 0;
}
```

---

> [!WARNING]
> b) неправильный код:
```C++
int return() {
return 5;
int return()
{
int k
;
k{3};
return k;
    } 
}
int main(){
std::cout << return() << std::endl;
std::cout << return() << std::endl;
}
```

> [!TIP]
> исправленный код

> Вывод: 5
> Вывод: 3
```C++
#include <iostream>

int return5(){
  return 5;
}

int return3(){
  int k{3};
  return k;
}

int main(){
  std::cout << return5() << std::endl;
  std::cout << return3() << std::endl;
  return 0;
}
```

---

> [!WARNING]
> c) неправильный код:
```C++
#include <iostream>
{()void prints
} std::cout << 'O_o' << std::endl;
int main
()
{
std::cout << prints() << std::endl;
return 0;
}
```

> [!TIP]
> исправленный код

> Вывод: O_o
```C++
#include <iostream>

void prints(){
  std::cout << "O_o" << std::endl;
}

int main(){
  prints();
  return 0;
}
```

---

> [!WARNING]
> d) неправильный код:
```C++
#include <iostream>
int getNumbers()
{
return 6;
return 8;
}
int main()
{
std::cout << getNumbers() << std::endl;
std::cout << getNumbers() << std::endl;
std::cout << getNumbers << std::endl;
return 0;
}
```

> [!TIP]
> исправленный код

> Вывод: 6
> Вывод: 8
> Вывод: 0

> [!NOTE]
> Замысел автора не ясен, сделаное нечто такое:

```C++
#include <iostream>

int getNumbers(int a){
    switch (a) {
    case 1: return 6;
    case 2: return 8;
    default: return 0;
    }
}

int main(){
  std::cout << getNumbers(1) << std::endl;
  std::cout << getNumbers(2) << std::endl;
  std::cout << getNumbers(3) << std::endl;
  return 0;
}
```

---

> [!WARNING]
> e) неправильный код:
```C++
int main()
std::cout << multiply(7, 8) << std::endl;
} return 0;
{void multiply(int a)
return a * b
}
int main() {
int x;
std::cin >> x;
constexpr int y(x); // в дальнейшем переменная usersAge не может быть изменена
std::cout << y << std::endl;
return 0;
}
```

> [!TIP]
> исправленный код

> Вывод: Введенное значение
> Вывод: 56

```C++
#include <iostream>

long long multiply(int a, int b){
  return a * b;
}

void print_mamultiply(){
  std::cout << multiply(7, 8) << std::endl;
}

int main() {
  int x;
  std::cin >> x;
  const int y(x); // в дальнейшем переменная usersAge не может быть изменена
  std::cout << y << std::endl;
  print_mamultiply();
  return 0;
}

```

---

> [!WARNING]
> f) неправильный код:
```C++
#include <iostream>
#define VALUE 1
int main() {
#if (VALUE == 0)
std::cout << VALUE <<"\n";
#elif (VALUE == 1)
std::cout << VALUE <<"\n";
#else
std::cout << VALUE <<"\n";
#endif
}
```

> [!TIP]
> исправленный код

> Добавил `return 0`, работать программа может и без изменений

> Вне зависимости от значения VALUE, производится только его печать, код может быть сокращен до:
```C++
#include <iostream>

#define VALUE 1

int main() {
  std::cout << VALUE <<"\n";
  return 0;
}
```

---

> [!WARNING]
> g) неправильный код:
```C++
#include <iostream>
namespace Mix {
enum class Fruits {
LEMON,
}; APPLE
enum class Colors {
RED,
}}; BLACK
int main() {
Fruits fruit = Fruits::LEMON;
std::cout << "MIX\n";
return 1;
}
```

> [!TIP]
> исправленный код

> Вывод: MIX
```C++
#include <iostream>

namespace Mix {
  enum class Fruits {
    LEMON,
    APPLE
  };
  enum class Colors {
    RED,
    BLACK
  };
}

int main() {
  Mix::Fruits fruit = Mix::Fruits::LEMON;
  std::cout << "MIX\n";
  return 1;
}
```

---

> [!WARNING]
> h) неправильный код:
```C++
#include <iostream>
{namespace DoMath
int subtract(int x, int y)
{
return x , y;
} }
{namespace DoMath
int add(int x, int y)
{
return x | y;
} }
{int main(void)
std::cout << DoMath::add(5, 4) << '\n';
std::cout << DoMath::subtract(5, 4) << '\n';
return 0;
}
```

> [!TIP]
> исправленный код

> Вывод: 9
> Вывод: 1
```C++
#include <iostream>

namespace DoMath{
  int subtract(int x, int y){
    return x - y;
  }

  int add(int x, int y){
    return x + y;
  }
}

int main(void){
  std::cout << DoMath::add(5, 4) << '\n';
  std::cout << DoMath::subtract(5, 4) << '\n';
  return 0;
}
```

---

> [!WARNING]
> 3.2) неправильный код:
```C++
#include <iostream>
int tmp = 1;
int getNumbers( {
int tmp = 1;
return 8;
}
int main()
{
int tmp = 3;

std::cout << tmp << "Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять

 и

комментировать "
<< std::endl;

return 0;
```

> [!TIP]
> исправленный код

>Вывод: 3Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять икомментировать

>Только дополнил код, чтобы выполнялось условие `компиляция`. Имеются warning на неиспользуемую переменную.
```C++
#include <iostream>
int tmp = 1;
int getNumbers() {
int tmp = 1;
return 8;
}
int main()
{
int tmp = 3;

std::cout << tmp << "Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять\
\
 и\
\
комментировать "
<< std::endl;

return 0;
}

```