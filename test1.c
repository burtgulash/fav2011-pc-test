/** 
 * Doplňte makra preprocesoru tak, aby kód fungoval. 
 * 6 bodů.
 **/

#include <stdio.h>

/* start řěšěňí */
#define IS(a,b) case a: b; break
#define IF(x) switch(x) {
#define ENDIF }
/* konec řěšěňí */

void main(int argc, char **argv)
{
    IF(argc)
        IS(0, printf("neco"));
    IS(1, printf("neco jinyho "));
    IS(2, printf("neco uplne jinyho "));
ENDIF}
