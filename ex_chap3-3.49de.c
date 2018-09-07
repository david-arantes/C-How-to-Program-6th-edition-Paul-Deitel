/* Exercise 3.49

This application should read a four digit integer and encrypt as follows:

Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the value by 10.
Then swap the first digit with the third, and the second with the fourth. Then encrypt the encrypted integer.

*/

#include <stdio.h>

int main( void )
{
    // Variables

    int cypher_number, a, b, c, d, e;
    int db, dc, dd, de; // d in front of the variables stands for decrypted.

    // Data Input

    printf( "\n\n\t\tNumber Decryption Software\n\n" );

    printf( "This software gets an 4 digit number and decrypts it.\n\n" );

    printf( "\nPlease, type the number: " );
    scanf( "%d", &cypher_number );


    // Data Process

    a = cypher_number;
    b = a / 1000 % 10;
    c = a / 100 % 10;
    d = a / 10 % 10;
    e = a % 10;

    db = ( b + 10 ) - 7;
    dc = ( c + 10 ) - 7;
    dd = ( d + 10 ) - 7;
    de = ( e + 10 ) - 7;

    // Data Output

    printf( "The decrypted number is: %d%d%d%d.\n\n", dd, de, db, dc );


} /* end main function */
