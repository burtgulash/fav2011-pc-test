/**
 * Jsou následující konstanty správně? Jestli ano, jakého jsou typu?
 *   0xA
 *   .1E0
 * 2 body.
 **/

#include <stdio.h>

int main()
{
    int a = 0xA;
    double b = .1E0;
    printf("%d\n%f\n", a, b);
    return 0;
}

/* Moje odpověď: 
 * 0xA  : Ano    , int    , hodnota 10
 * .1E0 : Si piš , double , hodnota 0.1
 */
