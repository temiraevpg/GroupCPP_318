> [!WARNING]
> 1) неправильный код:

``` C++
#include<iostream>
int main() {
    float a=3.14;
    char *pj;
    pj = (char*)&a;
    std::cout << *pj << '\n';
}
```

> [!TIP]
> исправленный код

``` C++
#include<iostream>
int main() {
    float a=3.14;
    float *pj;
    pj = &a;
    std::cout << *pj << '\n';
}
```


> [!WARNING]
> 2) неправильный код:

``` C++
int main(){
    int a=10, *pj;
    void *pk;
    pj = pk = &a;
    pj++;
    k++;
    std::cout << pk << '\n';
    std::cout << pj << '\n'
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
int main(){
    int a=10, *pj;
    int *pk;
    pj = pk = &a;
    (*pj)++;
    (*pk)++;
    std::cout << pk << '\n';
    std::cout << *pj << '\n';
}
```


> [!WARNING]
> 3) неправильный код:

``` C++
#include <iostream>
using namespace std;
struct phone{
int kod ;
int nom ;
}; int mom_abon ;
struct new_phone{
int kod1;
int nom1;
}; int mom_abon1;
int main() {
setlocale (LC_ALL, "rus" );
phone object;
new_phone new_object;
wcout << L"Введите код города, номер станции и номер абонента: ";
int mas_all[11];
cin >> mas_all[11];
int mas_a[2];
mas_a[0] = mas_all[0];
mas_a[1] = mas_all[1];
mas_a[2] = mas_all[2];
new_object.kod1 = mas_a[2];
int mas_b[2];
mas_b[0] = mas_all[4];
 mas_b[1] = mas_all[5];
mas_b[2] = mas_all[6];
new_object.nom1 = mas_b[2];
int mas_c[3];
mas_c[0] = mas_all[8];
mas_c[1] = mas_all[9];
mas_c[2] = mas_all[10];
mas_c[3] = mas_all[11];
new_object.mom_abon1= mas_b[2];
object.kod = 123;
object.nom = 456;
object.mom_abon = 7890;
wcout << L"Мой номер телефона : " << object.kod << " " << object.nom << " " << object.mom_abon << endl;
wcout << L"Ваш номер : " << new_object.kod1 << " " << new_object.nom1 << " " << new_object.mom_abon1 << endl;
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
using namespace std;
struct phone{
    int kod;
    int nom;
    int nom_abon;
};

int main() {
    phone ex_phone;
    phone in_phone = {.kod = 212, .nom = 767, .nom_abon = 8900};
    cout << "Введите код города, номер станции и номер абонента: ";
    cin >> ex_phone.kod >> ex_phone.nom >> ex_phone.nom_abon;
    cout << "Мой номер: (" << in_phone.kod << ") " << in_phone.nom << "-" << in_phone.nom_abon << '\n';
    cout << "Ваш номер: (" << ex_phone.kod << ") " << ex_phone.nom << "-" << ex_phone.nom_abon << '\n';
}

```


> [!WARNING]
> 4) неправильный код:

``` C++
#include <iostream>
using namespace std;
int main() {
    setlocale (LC_ALL, "rus" );
    const int n = 5;
    const int m = 10;
    int *a;
    int *b;
    a = new int*[n];
    b = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        b[i] = new int[m];
        cout << &a[i][0] << endl;
        cout << &b[i][0] << endl;
    }
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
using namespace std;
int main() {
    setlocale (LC_ALL, "rus" );
    const int n = 5;
    const int m = 10;
    int **a;
    int **b;
    a = new int*[n];
    b = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        b[i] = new int[m];
        cout << &a[i][0] << endl;
        cout << &b[i][0] << endl;
    }
}
```


> [!WARNING]
> 5) неправильный код:

``` C++
#include <iostream>
using namespace std;
int main() {
    char s[] = "char s[]: text";
    char* ps = "char* ps: text";
    std::string str = "std::string str: text";
    s = "another text";
    str = "std::string str: another text";
    char *s_1 = "char *s_1: text";
    const char *s_2 = "const char *s_2: text";
    wcout << "Вывод строк : "
}
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
using namespace std;
int main() {
    char s[] = "char s[]: text";
    char* ps = "char* ps: text";
    std::string str = "std::string str: text";
    str = "std::string str: another text";
    char *s_1 = "char *s_1: text";
    const char *s_2 = "const char *s_2: text";

    cout << "Вывод строк :" << '\n';
    cout << s << '\n';
    cout << ps << '\n';
    cout << str << '\n';
    cout << s_1 << '\n';
    cout << s_2 << '\n';
    system("pause");
}
```


> [!WARNING]
> 6) неправильный код:

``` C++
int main() {
wstring s = "I'am an developer";
wstring
s1 = s.substr(????),
s2 = s.substr(????),
s3 = s.substr(?),
s4 = s.substr(????);
wcout << "Why is you? : " << s1 s2+s3+s4 << '\n';
} 
```

> [!TIP]
> исправленный код

``` C++
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "I'am an developer";
    string
    s1 = s.substr(0, 3),
    s2 = s.substr(3, 3),
    s3 = s.substr(6, 3),
    s4 = s.substr(9, s.size());
    cout << "Why is you? : " << s1+s2+s3+s4 << '\n';
}
```