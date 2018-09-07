/* 3.17 - Gas Mileage Calculator.
This program calculates the miles per gallon for each tankful and the display the overall average. */

#include <stdio.h>

int main ( void )
{
    /* Variables */

    float gallons, miles, miles_per_gallon, total, overall_miles_gallon;
    int counter;

    counter = 1;
    total = 0;

    /* Data Input */

    printf( "\n\t\t\t\tGas Mileage Calculator\n\n" );
    printf( "This program calculates the miles per gallon for each tankful and then display the overall average.\n\n\n" );

    //printf( "\tPlease, input the number of gallons used: " );
    //scanf( "%f", &gallons );

    //printf( "\n\tPlease, input the miles driven: " );
    //scanf( "%f", &miles );

    /* Processing phase */

    while ( gallons > 0 )
    {

    printf( "\tPlease, input the number of gallons used: " );
    scanf( "%f", &gallons );

    printf( "\n\tPlease, input the miles driven: " );
    scanf( "%f", &miles );

    miles_per_gallon = miles / gallons;

    total += miles_per_gallon;

    counter++;

    } /* end while */

    overall_miles_gallon = total / counter;

    printf( "\n\nThe overall average miles per gallon was: %f", overall_miles_gallon );

    return 0;

} /* end main */
