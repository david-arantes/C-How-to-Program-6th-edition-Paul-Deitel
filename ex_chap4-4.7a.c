/* Ex. 4.7a:    ex_chap4-4.7a.c
    This program use for statement to print the following value: 1,2,3,4,5,6,7.
*/

#include <stdio.h>

int main ( void )
{
    int x;

    printf("\n");

    for ( x = 1 ; x <= 7 ; x++ )
    {
        printf( "%d\t", x );
    } /* end for */

    printf("\n");

    return 0;

} /* end main function */
