/* Ex 4.5e: ex_chap4-4.5e.c
    This program should output the odd integers from 999 to 1.
*/

#include <stdio.h>

int main ( void )
{

    int x;

    for ( x = 999; x >= 1; x -= 2 )
    {
        printf( "%d\n", x );
    } /* end for */

    return 0;

} /* end main function */


