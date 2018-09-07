/* Ex. 4.5f:    ex_chap4-4.5f.c
    This program should output the even integers from 2 to 100)
*/

#include <stdio.h>

int main ( void )
{
    int counter = 2;

    do
    {
        if( counter % 2 == 0 )
        {
            printf( "%d", counter );
        } /* end if */

        counter += 2;

        if ( counter % 20 == 0 )
        {
            printf( "\n" );
        } /* end if */

        else
        {
            printf( "\t" );
        } /* end else */

    }/* end do */

    while ( counter <= 100 );

    return 0;


} /* end main function */
