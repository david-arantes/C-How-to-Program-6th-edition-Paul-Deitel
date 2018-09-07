/* Exercise 3.46

a) Write a program that reads a nonnegative integer and computes and prints its factorial.

*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int x, y;
    int factorial = 1;

    // Data input

    printf( "\nPlease, input an integer to check it's factorial: " );
    scanf( "%d", &x );

    // Data Process

    if ( x >= 1 )
    {
        for ( y=1; y<=x; ++y )
        {
            factorial *= y;
        } /* end for */


    } /* end if */

    // Data Output

    else
    {
        printf( "\n\nThe factorial is equal to 1.\n" );
    } /* end else */

    printf( "\n\nThe factorial is equal to: %d\n\n", factorial );

    return 0;


} /* end main function */
