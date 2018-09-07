/* Ex 4.7d: ex_chap4-4.7d.c
    This program use for statement to print the following value: 19,27,35,43,51.
*/

#include <stdio.h>

int main ( void )
{

    int x;

    printf("\n");

    for ( x = 19 ; x <= 51 ; x += 8 )
    {
        printf( "%d\t", x );
    } /* end for */

    printf("\n\n");

    return 0;

} /* end main function */
