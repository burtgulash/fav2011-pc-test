/**
 * Co se vypíše?
 * 2 body.
 **/

#include <stdio.h>

void main()
{
    enum days { MON = -1, TUE, WED = 6, THU, FRI, SAT };
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
}

/* Moje odpověď: -1, 0, 6, 7, 8, 9 */
