/* Exercise 3.49

This application should read a four digit integer and encrypt as follows:

Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the value by 10.
Then swap the first digit with the third, and the second with the fourth. Then encrypt the encrypted integer.

*/

#include <stdio.h>

int main ( void )
{

    // Variables

    int plain_number, a, b, c, d, e;
    int eb, ec, ed, ee; // e in front of the variables stands for encrypted.

    // Data Input

    printf( "\n\n\t\tNumber Encryption Software\n\n" );

    printf( "This software gets an 4 digit number and encrypts it.\n\n" );

    printf( "\nPlease, type the number: " );
    scanf( "%d", &plain_number );

    // Data Process

    a = plain_number;
    b = a / 1000 % 10;
    c = a / 100 % 10;
    d = a / 10 % 10;
    e = a % 10;

    eb = ( b + 7 ) % 10;
    ec = ( c + 7 ) % 10;
    ed = ( d + 7 ) % 10;
    ee = ( e + 7 ) % 10;

    // Data Output

    printf( "The encrypted number is: %d%d%d%d.\n\n", ed, ee, eb, ec );



} /* end main function */
