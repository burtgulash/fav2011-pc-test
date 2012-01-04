/**
 * Zkompiluje v ANSI C? Pokud ano, co se vypíše.
 * 2 body.
 */

/* Moje odpověď: Zkompiluje, výpíše: 30. 
 * Po preprocesoru zbyde printf("%d\n", 02[i]).
 * 02 je oktálně 2.
 * 2[i] = *(2 + i) = *(i + 2) = i[2].
 */

#include <stdio.h>
#define FUN(i,j) j##i

void main()
{
    int i[] = { 10, 20, 30, 40, 50 };
    printf("%d\n", FUN(2[i], 0));
}
