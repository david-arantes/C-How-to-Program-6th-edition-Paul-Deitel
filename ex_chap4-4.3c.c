/* Ex 4.3c - ex_chap4-4.3c.c
    Calculate the value of 2.5 raised to the power of 3 using the pow function.
    Print the result with a precision of 2 in a field width of 10 positions. What is the value that prints?
*/

#include <stdio.h>
#include <math.h>

int main ( void )
{

    // Variables and constants

    float result;

    // Data processing and Output

    result = ( pow(2.5, 3) );

    printf( "\n\nThe result of 2.5 to the power of 3 is: %10.2f.\n\n", result );

    return 0;


} /* end main function */
