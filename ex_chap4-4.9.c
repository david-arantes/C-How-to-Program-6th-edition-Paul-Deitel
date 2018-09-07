/* Ex. 4.9: ex_chap4-4.9.c

(Sum a Sequence of Integers) This program sums a sequence of integers, Assume that
the first integer read with scanf specifies the number of values remaining to be entered. Your program
should read only one value each time scanf is executed. A typical input sequence might be
5   100 200 300 400 500

where the five indicates that the subsequent five values are to be summed.

*/

#include <stdio.h>

int main ( void )
{

    // Variables

    int qty; // Quantity of numbers to be entered.
    int number, total; // Numbers and total.
    int counter = 0;

    // Data Input and Processing

    printf("\n");

    printf( "Please, enter the amount of numbers to be summed: " );
    scanf( "%d", &qty );

    total = 0;

    do
    {
        printf( "Enter the integer: " );
        scanf( "%d", &number );
        total += number;
    } while ( ++counter < qty  ); /* end do while */

    // Data Output

    printf( "\nThe sum of the numbers is: %d.\n\n", total );

    return 0; // indicate program ended successfully

} /* end main function */
