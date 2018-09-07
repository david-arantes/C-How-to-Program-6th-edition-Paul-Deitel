/* Ex. 4.12:    ex_chap4-4.12.c
    (Calculating the Sum of Even Integers) This program calculates and prints the sum of
    the even integers from 2 to 30.
*/

#include <stdio.h>

int main ( void )
{

    int sum = 0;
    int i;

    for ( i = 2; i <= 30; i += 2 )
    {
        sum += i;

        printf( "\nSum %d: %d\n", i, sum );

    } /* end for */

    return 0;

} /* end main function */
