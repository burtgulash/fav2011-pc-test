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

## 5. otázka - 2 body
Napište nejkratším možným způsobem nekonečnou smyčku použitím "for"

[test5.c](test5.c)

## 6. otázka - ? bodů
Přeloží se následující kód správně podle ANSI C? Jestli ano, co funkce dělá
a jaký bude výstup programu.

[test6.c](test6.c)

## 7. otázka - ? bodů
Přeloží se následující kód podle ANSI C? 
Pokud ano, co vypíše, pokud ne, proč ne?

```c
#include <stdio.h>

void main()
{
    int j, a[] = { 10, 20, 30, 40, 50 };
    for (j = 0; j < 5; j++) {
        printf("%d\n", a);
        a++;
    }
}
```
[test7.c](test7.c)

## 8. otázka - 2 body
Zkompiluje v ANSI C? Pokud ano, co se vypíše.

```c
#include <stdio.h>
#define FUN(i,j) j##i

void main()
{
    int i[] = { 10, 20, 30, 40, 50 };
    printf("%d\n", FUN(2[i], 0));
}
```
[test8.c](test8.c)

## 9. otázka - 2 body
Co se vypíše?

```c
#include <stdio.h>

void main()
{
    enum days { MON = -1, TUE, WED = 6, THU, FRI, SAT };
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
}
```
[test9.c](test9.c)

## 10. otázka - ? bodů
K čemu slouží knihovní fuknce fflush? Uveďte příklad.

[test10.c](test10.c)
