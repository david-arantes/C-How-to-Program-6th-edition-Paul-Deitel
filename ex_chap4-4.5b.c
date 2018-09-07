/* Ex. 4.5b:    ex_chap4-4.5b.c
    This program reads an integer number and check if it is an even or odd number.
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int value;

    // Data Input

    printf( "\nType a number: " );
    scanf( "%d", &value );
    printf( "\n\n" );

    // Data processing and Output

    switch ( value % 2 )
    {
        case 0:
        printf( "Even Integer!\n" );
        break;

        case 1:
        printf( "Odd Integer!\n\n" );
        break;
    } /* end switch */

    return 0;


} /* end main function */
