// For exercises 3.17 to 3.21, perform each of these steps:
// 1. Read the problem statement.
// 2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
// 3. Write a C program.
// 4. Test, debug, and execute the C program.
//
// Exercise 3.17
//
// 1. (Gas Mileage) Drivers are concerned with the mileage obtained by their
// automobiles. One driver has kept track of several tankfuls of gasoline by
// recording miles driven and gallons used for each tankful. Develop a program
// that will input the miles driven and gallons used for each tankful. After
// processing all input information, the program should calculate and print
// the combined miles per gallon obtained for all tankfuls. Here is a sample
// input/output dialog:

// 2. Pseudocode
// Calculate the average miles per gallon

// Initialize variable for total gallons to zero
// Initialize variable for total miles to zero

// While the user has not entered the sentinel
//    Input the gallons used
//    Input the miles driven
//    Calculate the miles per gallon
//
//    If the sentinel is entered
//      Divide the overall average by the quantity of entries
//      Print the overall average miles per gallon

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{

    // Variables

    int counter;
    float gallons, miles, tankAverage, overallAverage, total;

    // Initializing variables

    counter = 0;
    total = 0;

    printf( "\n\t\t\t\tGas Mileage Calculator\n\n" );
    printf( "This program calculates the miles per gallon for each tankful and then display the overall average.\n\n\n" );

    while( true )
    {
        printf( "Enter the gallons used, ( -# any number to end): " );
        scanf( "%f", &gallons );

        if ( gallons <= -1 )
        {
            overallAverage = total / counter;
            printf( "The overall average miles/gallon was %f.\n", overallAverage );

            return 0;

        } /* end if */

        printf( "Enter the miles driven: " );
        scanf( "%f", &miles );

        tankAverage = miles / gallons;

        printf( "The miles per gallon for this tank was %f.\n", tankAverage );

        total += tankAverage;

        counter++;

    } /* end while */

    return 0;

} /* end main */
