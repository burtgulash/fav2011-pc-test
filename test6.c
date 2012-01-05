/**
 * Přeloží se následující kód správně podle ANSI C? Jestli ano, co funkce dělá
 * a jaký bude výstup programu.
 * 
 **/

#include <stdio.h>
int foo(char *str)
{
    int i = 0;
    char c;
    while (c == ' ' ? i++ : 0, c = *str++);
    return i;
}

void main()
{
    char s[] = "Toto je velmi zábavný text";
    printf("%d\n", foo(s));
}

/* pozn. Doslova už si to nepamatuju, vypíše to počet mezer ve stringu */
