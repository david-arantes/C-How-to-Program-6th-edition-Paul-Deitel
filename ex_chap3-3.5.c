/* ex_chap3-3.5.c - This program calculates the sum of integers from 1 to 10. Use the while
statement to loop through the calculation and increment statements. The loop should terminate when the value of x
becomes 11. */

#include <stdio.h>

int main ( void )
{

    /* Variables */

    int x, sum;

    /* Initialization of the variables */

    sum = 0;
    x = 1;

    /* Processing */

    while ( x < 11 )
    {
        sum += x++;
    } /* end while */

    /* Output */

    printf( "\nThe final result is: %d.\n\n", sum );

    return 0;

} /* end main function */
