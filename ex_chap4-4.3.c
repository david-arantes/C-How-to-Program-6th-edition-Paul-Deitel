/* Ex 4.3 - ex_chap4-4.3.c
    a) Sum the odd integers between 1 and 99 using a for statement, Assume the integer variables
    sum and count have been defined.
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int count;
    int sum = 0;

    // Processing and data output

    for ( count = 1; count <= 99; (count = count + 2) )
    {
        sum = sum + count;
    } /* end for */


    printf( "\n\nThe sum of the odd numbers between 1 and 99 is: %d.\n\n", sum );

    return 0;

} /* en main function */
