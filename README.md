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

* Moje odpověď
```c
#define IS(a,b) case a: b; break
#define IF(x) switch(x) {
#define ENDIF }
```


## 2. příklad - 3 boby
Máte IEEEEEEEE floating point číslo (typu float) 0xC1D90000, jak vypadá v desítkový soustavě? 

### Odpověď
* moje odpověď: něco zápornýho
* správná odpověď: -27.125

```c
#include <stdio.h>

void main()
{
    int x = 0xC1D90000;
    float f = *((float *) &x);
    printf("%f\n", f);
}
```
