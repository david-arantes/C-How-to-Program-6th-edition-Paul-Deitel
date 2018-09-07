/* Fig. 3.6: fig03_06.c
   Class average program with counter-controlled-repetition */

#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
    // Variables

    int counter; /* number of grade to be entered next */
    int grade; /* grade value */
    int total; /* sum of grades input by user */
    int average; /* average of grades */

    // Initialization Phase

    total = 0; /* initialize total */
    counter = 1; /* initialize loop counter */

    // Processing Phase

    while (  counter <= 10) /* Loop 10 times */
    {
        printf( "\nEnter Grade: " ); /* prompt for input */
        scanf( "%d", &grade ); /* read grade from user */
        total = total + grade; /* add grade to total */
        counter = counter + 1; /* increment counter */
    } /* End while */

    /* Termination phase */
    average = total / 10; /* Integer division */

    // Data Output

    printf( "\n\nClass average is: %d.\n", average ); /* display result */

    return(0); /* indicate program ended successully */


} /* end function main */
