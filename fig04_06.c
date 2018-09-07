/* Fig. 4.6: fig04_06.c

Calculating compound interest

A person invests $1000.00 in a savings account yielding 5% interest. Assuming that
all interest is left on deposit in the account, calculate and print the amount of money
in the account at the end of each year for 10 years. Use the following formula for
determining these amounts:

a = p(1 + r)^n

where

p is the original amount invested.
r is the annual interest rate.
n is the number of years.
a is the amount on deposit at the end of the n^th year.

This problem involves a loop that performs the indicated calculation for each of the 10 years the money
remains on deposit.

*/

#include <stdio.h>
#include <math.h>

int main ( void )
{
    double amount; //amount on deposit
    double principal = 1000.0; // starting principal
    double rate = 0.5; // annual interest rate
    int year; // year counter

    /* Output table column head */
    printf( "%4s%21s\n", "Year", "Amount on deposit" );

    /* Calculate amount on deposit for each of ten years */

    for ( year = 1; year <= 10; year++ )
    {
        /* Calculate new amount for specified year */
        amount = principal * pow(1.0 + rate, year);

        /* Output one table row */
        printf( "%4d%21.2f\n", year, amount );

    } /* end for */

    return 0; /* indicate program ended successfully */


} /* end main function */
