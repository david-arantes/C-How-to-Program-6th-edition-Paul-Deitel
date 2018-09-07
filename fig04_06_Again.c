/* Fig. 4.6: fig04_06_Again.c
   Calculating compound interest */

#include <stdio.h>
#include <math.h>

/* Function main begins program execution */
int main ( void )
{
    // Variables
    double amount; /* Amount on deposit */
    double principal = 1000.0; /* Starting principal */
    double rate = .05; /* Annual interest rate */
    int year; /* Year counter */

    /* Output table column head */
    printf("\n\n");
    printf(" %4s%21s\n", "Year", "Amount on deposit");

    /* Calculate amount on deposit for each of ten years */
    for ( year = 1; year <= 10; year++ )
    {
        /* Calculate new amount for specified year */
        amount = principal * pow( 1.0 + rate, year );

        /* Output one table row */
        printf( "%4d%21.2f\n", year, amount );

    } /* end for */

    return 0; /* indicate program ended successfully */

} /* end main function */
