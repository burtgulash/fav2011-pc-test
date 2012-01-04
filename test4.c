/** 
 * Napište funkci typu "float eps (float x)", která pro dané číslo zjistí
 * strojovou přesnost (WTF). 
 * Za 6 bodů.
 **/


/* moja odpověď: */
float eps1 (float x)
{
	/* Vyskubne cislo z pameti a castne ho na int. Pricte k nemu jednicku. 
     * IEEEEEE floating pointy maj vlastnost, ze bit, kterej je vic vlevo
     * je signifikantnejsi, takze se daj porovnavat jako inty 
     * (uzitecny treba v radix sortu). 
	 * Takze kdyz mam nejakej float a chci ten, kterej bude nasledovat za nim,
	 * tak k nemu prictu jednotku jako k intu.
     * Treba to je cely kravina, ale na wikipedii maj podobny reseni.
     * Tohle cely jsem tam fakt nepsal.
     */
	int y = *((int*) &x) + 1;
	/* Prekonvertuje to cislo zpatky na float */
	float next = *((float*) &y);
	/* Vrati kladnou deltu mezi tema dvema cislama */
	return next - x;
}


/* odpoved s trikem z wiki: (frajerina, ale na stejnym principu) */
float eps2 (float x)
{
	union {
		int i;
		float f;
	} u;
	u.f = x;
	u.i ++;
	return u.f - x;
}


/* otestovani: */
#include <stdio.h>
#include <float.h> /* tu je ta konstanta FLT_EPSILON*/

int main()
{
	/* Machine epsilon se prej (podle wiki) meri od jednicky */
	printf("Moje      :  %g\n", eps1(1));
	printf("Wiki      :  %g\n", eps2(1));
	printf("Konstanta :  %g\n", FLT_EPSILON);
	printf("Yay!\n");
	return 0;
}
