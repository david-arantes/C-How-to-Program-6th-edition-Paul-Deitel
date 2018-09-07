/*  Exercise 3.46

b) Write a program that estimates the value of the mathematical constant "e" by using the formula:

    e = 1 + 1/1! + 1/2! + 1/3! + ...

*/

#include <stdio.h>

int main ( void )
{
    // Variables

    float e;

    // Data Process

    e = ( 1 + ( 1 / 1 * 1 ) + ( 1 / 2 * 1 ) + ( 1 / 3 * 2 * 1 ) );

    // Data Output

    printf( "\n\nThe elementar(e) value is: %f\n\n", e );

    return 0;

} /* end main function */
