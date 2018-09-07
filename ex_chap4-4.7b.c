/* Ex. 4.7b:    ex_chap4-4.7b.c
    This program use for statement to print the following value: 3,8,13,18,23.
*/

#include <stdio.h>

int main ( void )
{
    int x;

    printf("\n");

    for ( x = 3 ; x <= 23 ; x += 5 )
    {
        printf( "%d\t", x );
    } /* end for */

    printf("\n");

    return 0;

} /* end main function */
