/* Ex. 4.15:    ex_chap4-4.15.c

(Modified Compound Interest Program) Modify the compound-interest program of section 4.6
to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9% and 10%. Use a for loop to
vary the interest rate.

*/

#include <stdio.h>
#include <math.h>

int main ( void )
{
    double amount;
    double principal = 1000.0;
    double rate;
    int year;

    for ( rate = .05; rate <= 0.1; rate += 0.01 )
    {
        printf( "Rate: %.2f\n\n", rate );
        printf( "%6s%21s\n", "Year", "Amount on deposit" );
        for ( year = 1; year <= 10; year++ )
        {
            amount = principal * pow( 1.0 + rate, year );
            printf( "%6d%21.2f\n", year, amount );
        } /* end for */

        printf("\n");

    } /* end for */

    return 0;

} /* end main function */
