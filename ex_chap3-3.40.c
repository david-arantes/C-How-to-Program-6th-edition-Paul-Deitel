/* Exercise 3.40 (Checkerboard Pattern of Asterisks)
Write a program that displays the following checkerboard pattern:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

 */


#include <stdio.h>

int main ( void )
{

    int i = 1;
    int n = 0;
    int z = 64;
    int y = 0;

    while ( i <= z )
    {
        n = i % 8;
        y = i % 16 - 8;

        printf( "* " );

        if ( n == 0 )
        {
            printf( "\n" );
        } /* end 1 if */

        if ( y == 0 )
        {
            printf( " " );
        } /* end 2 if */

        i++;

    } /* end while */

    return 0;

} /* end main function */
