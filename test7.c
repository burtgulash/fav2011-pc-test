/**
 * Přeloží se následující kód podle ANSI C? 
 * Pokud ano, co vypíše, pokud ne, proč ne?
 * 
 **/

#include <stdio.h>

void main()
{
    int j, a[] = { 10, 20, 30, 40, 50 };
    for (j = 0; j < 5; j++) {
        printf("%d\n", a);
        a++;
    }
}


/* Moje odpověď: Přeloží se s formátovacím varováním (%d čeká (int), ne (int*)).
 * Pokud je třeba a = 12345, vypíše to:
 * 12345
 * 12349
 * 12353
 * 12357
 * 12361
 */

/* Tak tohle jsme posrali asi všichni. Nezkompiluje to kvuli tomu (a++).
 * error: lvalue required as increment operand
 */
