/* Exercise 3.36 (Printing the Decimal Equivalent of a Binary Number) Input an Integer containing only
0s and 1s(i.e., a "binary" integer) and prints its decimal equivalent.
[Hint: Use the remainder and division operators to pick off the "binary" number's digits one at a time from right to left.
Just as in the decimal number system, in which the rightmost digit has a positional value of 1, and the next digit left
has a positional value of 10, then 100, then 1000, and so on, in the binary number system the rightmost digit has a positional
value of 1, the next digit left has a positional value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted
as 4 * 1 + 3 * 10 + 2 * 100.
The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]
*/

#include <stdio.h>

int main ( void )
{
    int a, b, c, d, e, f, g, h, n, decimal;

    printf( "\nInput an eight-digit integer in 1's and 0's(Binary): " );
    scanf( "%d", &n );

    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    d = n / 1000 % 10;
    e = n / 10000 % 10;
    f = n / 100000 % 10;
    g = n / 1000000 % 10;
    h = n / 10000000 % 10;

    if ( h == 1 )
    {
        h = 128;
        printf( "%d\t", h );
    } /* end "h" if */
    else
    {
        printf( "%d\t", h );
    } /* end "h" else */

    if ( g == 1 )
    {
        g = 64;
        printf( "%d\t", g );
    } /* end "g" if */
    else
    {
        printf( "%d\t", g );
    } /* end "g" else */

    if ( f == 1 )
    {
        f = 32;
        printf( "%d\t", f );
    } /* end "f" if */
    else
    {
        printf( "%d\t", f );
    } /* end "f" else */

    if ( e == 1 )
    {
        e = 16;
        printf( "%d\t", e );
    } /* end "e" if */
    else
    {
        printf( "%d\t", e );
    } /* end "e" else */

    if ( d == 1 )
    {
        d = 8;
        printf( "%d\t", d );
    } /* end "d" if */
    else
    {
        printf( "%d\t", d );
    } /* end "d" else */

    if ( c == 1 )
    {
        c = 4;
        printf( "%d\t", c );
    } /* end "c" if */
    else
    {
        printf( "%d\t", c );
    } /* end "c" else */

    if ( b == 1 )
    {
        b = 2;
        printf( "%d\t", b );
    } /* end "b" if */
    else
    {
        printf ( "%d\t", b );
    } /* end "b" else */

    if ( a == 1 )
    {
        a = 1;
        printf( "%d\t", a );
    } /* end "a" if */
    else
    {
        printf( "%d\t", a );
    } /* end "a" else */

    decimal = a + b + c + d + e + f + g + h;

    printf( "\nThe decimal equivalent of that binary number is: %d.\n", decimal );

    return 0;

} /* end main function */
