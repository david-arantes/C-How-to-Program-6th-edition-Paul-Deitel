/* Ex. 4.13:    ex_chap4-4.13.c
    (Calculating the product of odd integers) This program calculates and prints the product
    of the odd integers from 1 to 15.
*/

#include <stdio.h>

int main ( void )
{
    int product = 1;
    int oldproduct;
    int i;

    for ( i = 1; i <= 15; i += 2 )
    {
        oldproduct = product;
        product *= i;

        printf( "\n%6d * %2d = %7d\n", oldproduct, i, product );

    } /* end for */

    return 0;

} /* end main function */
