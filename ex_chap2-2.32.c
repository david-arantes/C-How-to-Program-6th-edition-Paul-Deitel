/* 2.32 (Body Mass Index Calculator)

The formula is:

BMI = weightInKilograms / (heightInMeters x heightInMeters).

BMI Values

Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

*/

#include <stdio.h>

int main( void )
{
    // Variables

    float weight, height, bmi;

    // Dataq Input

    printf( "\tThis program calculates the Body Mass Index.\n\n" );

    printf( "Please, type your Weight in Kilograms: " );
    scanf( "%f", &weight );
    printf( "Now, type your Height in meters: " );
    scanf( "%f", &height );

    // Data Processing

    bmi = weight / ( height * height );

    // Data Output

    printf( "Your BMI is: %.2f", bmi );

    if ( bmi < 18.5)
    {
        printf( "\n\nYou are Underweight!\n\n" );
    }

    if ( bmi >= 18.5 && bmi <= 24.9 )
    {
        printf( "\n\nYou are Normal!\n\n" );
    }

    if ( bmi >= 25 && bmi <= 29.9 )
    {
        printf( "\n\nYou are Overweighted!\n\n" );
    }

    if ( bmi >= 30 )
    {
        printf( "\n\nYou are Obese!\n\n" );
    }

    return(0);

}
