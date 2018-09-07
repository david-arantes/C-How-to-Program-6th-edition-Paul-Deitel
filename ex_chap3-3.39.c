/* Exercise 3.39 (Counting 7s)
Write a program that reads an integer and determines and prints how many digits in the integer are 7s.
*/

#include <stdio.h>

int main ( void )
{

    int counter = 0;
    int a, b, c, d, e, n;

    printf( "\nInput a five-digit integer: " );
    scanf( "%d", &n );

    a = n % 10;
    b = n / 10 %10;
    c = n / 100 % 10;
    d = n / 1000 % 10;
    e = n / 10000;

    if ( a == 7 )
    {
        counter++;
    } /* end 1 if */

    if ( b == 7 )
    {
        counter++;
    } /* end 2 if */

    if ( c == 7 )
    {
        counter++;
    } /* end 3 if */

    if ( d == 7 )
    {
        counter++;
    } /* end 4 if */

    if ( e == 7 )
    {
        counter++;
    } /* end 5 if */

    printf( "\n%d seven(s) in: %d.\n\n", counter, n );

    return 0;

} /* end main function */
