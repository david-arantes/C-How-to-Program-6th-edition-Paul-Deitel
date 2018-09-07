/* Ex 4.7c: ex_chap4-4.7c.c
    This program use for statement to print the following value: 20,14,8,2,-4,-10.
*/

#include <stdio.h>

int main ( void )
{
    int x;

    printf("\n");

    for ( x = 20 ; x >= -10 ; x -= 6 )
    {
        printf( "%d\t", x );
    } /* end for */

    printf("\n\n");

    return 0;

} /* end main function */
