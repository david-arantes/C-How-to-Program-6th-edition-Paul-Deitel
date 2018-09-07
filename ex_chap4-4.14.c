/* Ex. 4.14:    ex_chap4-4.14.c

(Factorials) The factorial function is used frequently in probability problems. The factorial
of a positive integer n (written n! and pronounced "n factorial") is equal to the product of the
positive integers from 1 to n. This program evaluates the factorial of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from calculating the factorial
of 20?

*/

#include <stdio.h>

int main( void )
{

    int cumprod = 1;
    int number, n;

    printf( "\nEnter n: " );
    scanf( "%d", &n );

    for ( ; n >= 1; n-- )
    {
        cumprod *= n;
    } /* end for */

    printf( "n! = %d.\n", cumprod );

    return 0;

} /* end main function */
