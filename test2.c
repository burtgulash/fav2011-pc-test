/* Máte IEEEEEEEE floating point číslo (typu float) 0xC1D90000, 
   jak vypadá v desítkový soustavě? */

#include <stdio.h>

void main() {
	int x = 0xC1D90000;
	float f = *((float*) &x);
	printf("%f\n", f);
}

/* moje odpověď: něco zápornýho */
/* správná odpověď: -27.125 */
