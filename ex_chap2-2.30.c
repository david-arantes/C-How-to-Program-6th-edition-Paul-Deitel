/* 2.30 - Separating Digits in an Integer - This program allows the input of a five-digit number, and then
separates the number into its individual digits and prints the digits separated from one another by three spaces each. */

#include <stdio.h>

int main( void )
{
    // Variables

    int number, a, b, c, d, e, f;

    // Data Input

    printf( "Enter one 5 digit number: " );
    scanf( "%d", &number );

    // Data Processing

    a = number;
    b = a / 10000;
    c = a / 1000 % 10;
    d = a / 100 % 10;
    e = a / 10 % 10;
    f = a % 10;

    // Data Output

    printf( "\n%d   %d   %d   %d   %d\n", b, c, d, e, f );

    return(0);


}
