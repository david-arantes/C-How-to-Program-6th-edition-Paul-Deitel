/* Ex. 4.10:    ex_chap4-4.10.c
(Average a sequence of integers) This program calculates and prints the average of several integers.
Assume the last value read with scanf is the sentinel 9999. A typical input sequence might be 10  8  11  7  9  9999
indicating that the average of all the values preceding 9999 is to be calculated.
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int x; // Current number.
    int total; // The sum of the numbers.
    int average; // The average of the sum.
    int counter = 0; // Number of numbers entered.

    // Data Input and Processing

    printf("\n");

    total = 0;

    do
    {
        printf( "Please, enter an integer(9999 to finish): " );
        scanf( "%d", &x );

        total += x;

        counter++;
    }
    while ( x != 9999 ); /* end do while */

    (total = total - 9999);

    --counter;

    average = ( total / counter );

    printf( "\nThe sum is %d, and the average is %d.\n\n", total, average );

    return 0;


} /* end main function */
