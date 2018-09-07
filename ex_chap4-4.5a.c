/* Ex. 4.5a: ex_chap4-4.5a.c
*/

#include <stdio.h>

int main ( void )
{
    int x;

    printf("\n");

    for ( x = 100 ; x >= 1 ; x-- )
    {
        printf( "%d", x );

        if ( x % 10 == 0 )
        {
            printf( "\n" );
        } /* end if */

        else
        {
            printf( "\t" );
        } /* end else */
    } /* end for */

    printf("\n");

    return 0;

} /* end main function */
