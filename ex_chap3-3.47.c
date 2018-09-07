/* Exercise 3.47 (World Population Growth Calculator)
Get the current world population and the annual world population growth rate.
Displays the estimated world population after one, two, three, four and five years.
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    float cur_wor_pop, an_wor_pop_gr, est_wor_pop_one, est_wor_pop_two, est_wor_pop_three, est_wor_pop_four, est_wor_pop_five;

    // cur_wor_pop   --> Current World Population.
    // an_wor_pop_gr --> Annual World Population Growth Rate.
    // est_wor_pop_  --> Estimated World Population Growth after one, two, three, four and five years.

    // Input Data

    printf( "\n\nWorld Population Growth Calculator\n\n" );

    printf( "Please, type the current world population: " );
    scanf( "%f", &cur_wor_pop );

    printf( "\nType the annual world population growth in percentage: " );
    scanf( "%f", &an_wor_pop_gr );

    // Processing

    est_wor_pop_one = ( cur_wor_pop + ( cur_wor_pop * an_wor_pop_gr ) );
    est_wor_pop_two = ( cur_wor_pop + ( cur_wor_pop * ( 2 * an_wor_pop_gr) ) );
    est_wor_pop_three = ( cur_wor_pop + ( cur_wor_pop * ( 3 * an_wor_pop_gr) ) );
    est_wor_pop_four = ( cur_wor_pop + ( cur_wor_pop * ( 4 * an_wor_pop_gr) ) );
    est_wor_pop_five = ( cur_wor_pop + ( cur_wor_pop * ( 5 * an_wor_pop_gr) ) );

    // Data Output

    printf( "\n\n The estimated world population in one year is: %f people.",  est_wor_pop_one);
    printf( "\n The estimated world population in one year is: %f people.",  est_wor_pop_two);
    printf( "\n The estimated world population in one year is: %f people.",  est_wor_pop_three);
    printf( "\n The estimated world population in one year is: %f people.",  est_wor_pop_four);
    printf( "\n The estimated world population in one year is: %f people.\n\n",  est_wor_pop_five);

    return 0;

} /* end main function */
