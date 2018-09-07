/* Exercise 3.43
Write a program with the following statement? Rewrite the statement to accomplish what the programmer
was probably trying to do.

printf( "%d", ++( x + y) );

*/

#include <stdio.h>

int main ( void )
{

    int x, y, z;

    printf( "\nType the number of X: " );
    scanf( "%d", &x );

    printf( "\nType the number of Y: " );
    scanf( "%d", &y );

    z = x + y;

    ++z;

    printf( "\nThe new value of Z, incremented by 1 is: %d.\n\n", z );

    return 0;

} /* end main function */
