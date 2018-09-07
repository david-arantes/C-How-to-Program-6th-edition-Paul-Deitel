/* Fig 4.1: fig04_01.c
    Counter-controlled repetition */

#include <stdio.h>

/* function main begins program execution */
int main ( void )
{

    int counter = 1; /* initialization */

    while ( counter <= 10 ) // repetition condition
    {
        printf( "\n%d\n", counter ); // display counter
        ++counter; // Increment
    } /* end while */

    return 0; /* indicate program ended successfully */

} /* end main function */
