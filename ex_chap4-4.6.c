/* Ex. 4.6: ex_chap4-4.6.c
    State which values of the control variable x are printed by each of the following for statements:
*/

#include <stdio.h>

int main ( void )
{
    int x;

    printf( "\n" );

    /* for ( x = 2 ; x <= 13 ; x += 2 )
    {
        printf( "%d\t", x );
    } /* end for */

    /* for ( x = 5 ; x <= 22 ; x += 7 )
    {
        printf( "%d\t", x );
    } /* end for */

    /* for ( x = 3 ; x <= 15 ; x += 3 )
    {
        printf( "%d\t", x );
    } /* end for */

    /* for ( x = 1 ; x <= 5 ; x += 7 )
    {
        printf( "%d\t", x );
    } /* end for */

    for ( x = 12 ; x >= 2 ; x -= 3 )
    {
        printf( "%d\t", x );
    } /* end for */

    printf( "\n\n" );

    return 0;

} /* end main function */
