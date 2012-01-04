/* Doplňte makra preprocesoru tak, aby kód fungoval. */

#include <stdio.h>

/* start reseni */
#define IS(a,b) case a: b; break
#define IF(x) switch(x) {
#define ENDIF }
/* konec reseni */

void main(int argc, char ** argv) {
	IF(argc)
		IS(0, printf("neco"));
		IS(1, printf("neco jinyho "));
		IS(2, printf("neco uplne jinyho "));
	ENDIF
}
