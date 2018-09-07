/* Exercise 3.48 (Target-Heart-Rate Calculation)
This program reads the user's birthday and current day (each consisting of the month, day and year),
then calculates and displays the person's age (in years), the person's maximum heart rate and the target
heart rate.

The formula to calculate the Maximum Heart Rate in beats per minute(bpm) is 220 minus person's age.
The target heart rate is about 50 to 85% of the maximum heart rate.

*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int mhr; // Maximum Heart Rate
    int official_years; // Official person's years by adding the years itself plus the month.
    int years, months; // Person's years and months.
    int years_for_math; // The years for the HR Calculation.
    int birthday_year, birthday_month, birthday_day, current_year, current_month, current_day;

    int days;       // The sum of the days.
    int days_month; // Number of days calculated by the sum of the months

    // Data Input

    printf( "\n\tTarget-Heart-Rate Calculator.\n\n" );

    printf( "Please, input the following data:\n" );
    printf( "Birthday month(MM): " );
    scanf( "%d", &birthday_month );
    printf( "Birthday day(DD): " );
    scanf( "%d", &birthday_day );
    printf( "Birthday year(YYYY): " );
    scanf( "%d", &birthday_year );
    printf( "\n\n" );
    printf( "Current month(MM): " );
    scanf( "%d", &current_month );
    printf( "Current day(DD): " );
    scanf( "%d", &current_day );
    printf( "Current year(YYYY): " );
    scanf( "%d", &current_year );

    // Data Process

    if ( birthday_month == 1 )
    {
        days_month = 31;
    } /* end 1 if */

    if ( birthday_month == 2 )
    {
        days_month = 59;
    } /* end 2 if */

    if ( birthday_month == 3 )
    {
        days_month = 90;
    } /* end 3 if */

    if ( birthday_month == 4 )
    {
        days_month = 120;
    } /* end 4 if */

    if ( birthday_month == 5 )
    {
        days_month = 151;
    } /* end 5 if */

    if ( birthday_month == 6 )
    {
        days_month = 181;
    } /* end 6 if */

    if ( birthday_month == 7 )
    {
        days_month = 212;
    } /* end 7 if */

    if ( birthday_month == 8 )
    {
        days_month = 243;
    } /* end 8 if */

    if ( birthday_month == 9 )
    {
        days_month = 273;
    } /* end 9 if */

    if ( birthday_month == 10 )
    {
        days_month = 304;
    } /* end 10 if */

    if ( birthday_month == 11 )
    {
        days_month = 334;
    } /* end 11 if */

    if ( birthday_month == 12 )
    {
        days_month = 365;
    } /* end 12 if */

    // Math to get the person's years
    years = ( current_year - birthday_year );
    months = ( current_month - birthday_month );
    days = ( current_day - birthday_day );

    if ( months < 0 )
    {
        months = months * ( -1 );
    } /* end 1 if */

    if ( days < 0 )
    {
        days = days * ( -1 );
    } /* end 2 if */


    if ( months >= 6 )
    {
        years_for_math = years + 1;
    } /* end 3 if */


    mhr = 220 - years_for_math;


    // Data Output

    printf( "\nThe person's age is %d years, %d months and %d days.\n", years, months, days );

    printf( "\nThe Maximum Heart Rate is %d bpm.\n", mhr );

    printf( "\nThe average of the Target Heart Rate is about %.1f to %.1f bpm.\n\n", (mhr * 0.5), (mhr * 0.85) );


    return 0;



} /* end main function */
