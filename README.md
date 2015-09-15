# Zkouška z předmětu KIV/PC
4. ledna 2012. Otestování příkladů z písemky.

* Zkoušející/vyučující [Ing. Kamil  EKŠTEIN, Ph.D.](https://www.zcu.cz/about/people/?osoba=18388)


## 1. příklad - 6 bodů
Doplňte makra preprocesoru tak, aby kód fungoval. 

```c
#include <stdio.h>

void main(int argc, char **argv)
{
    IF(argc)
        IS(0, printf("neco"));
        IS(1, printf("neco jinyho "));
        IS(2, printf("neco uplne jinyho "));
    ENDIF
}
```

[test1.c](test1.c)


## 2. příklad - 3 body
Máte IEEEEEEEE floating point číslo (typu float) 0xC1D90000, jak vypadá v desítkový soustavě? 

[test2.c](test2.c)

## 3. otázka - 2 body
Jsou následující konstanty správně? Jestli ano, jakého jsou typu?
 * 0xA
 * .1E0

[test3.c](test3.c)

## 4. otázka - 6 bodů
Napište funkci typu "float eps (float x)", která pro dané číslo zjistí
strojovou přesnost.

[test4.c](test4.c)
