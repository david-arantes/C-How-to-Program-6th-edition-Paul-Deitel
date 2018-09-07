/* Ex. 4.11:    ex_chap4-4.11.c
(Find the Smallest) This program finds the smallest of several integers. Assume that
the first value read specifies the number of values remaining.

*/

#include <stdio.h>

int main ( void )
{
    int number, nofint, counter, min = 9999;

    printf("\n");

    printf( "Enter # of int to be inserted: " );
    scanf( "%d", &nofint );

    for ( counter = 1; counter <= nofint; counter++ )
    {
        printf( "\nEnter # %d: ", counter );
        scanf( "%d", &number );

        if ( number < min )
            min = number;

    } /* end for */

    printf( "\nThe min is %d.\n\n", min );

    return 0;

} /* end main function */
