/* Ex 4.5g: ex_chap4-4.5f.c
    This program should sum the integers from 100 to 150 ( assume total is initialized to 0 )
*/

#include <stdio.h>

int main ( void )
{

    int x;
    int total = 0;

    for ( x = 100 ; x <= 150 ; x++ )
    {
        total += x;
    }

    printf( "\nThe total from 100 to 150 is: %d.\n\n", total );

    return 0;

} /* end main function */
