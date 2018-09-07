/* Fig 4.7: fig04_07.c
    Counting letter grades */

#include <stdio.h>

int main ( void )
{
    int grade; // one grade
    int aCount = 0; // number of As
    int bCount = 0; // number of Bs
    int cCount = 0; // number of Cc
    int dCount = 0; // number of Ds
    int fCount = 0; // number of Fs

    printf( "\n\nEnter the letter grades.\n\n" );
    printf( "Enter the EOF character to end input.\n " );

    /* loop until user types end-of-file key sequence */
    while ( ( grade = getchar() ) != EOF )
    {
        /* determine which grade was input */
        switch ( grade ) // switch nested in while
        {

            case 'A': /* grade was uppercase A */
            case 'a': /* or lowercase a */
            ++aCount; /* increment aCount */
                break; /* necessary to exit switch */

            case 'B': /* grade was uppercase B */
            case 'b': /* or lowecase b */
            ++bCount; /* increment bCount */
                break; /* necessary to exit switch */

            case 'C': /* grade was uppercase C */
            case 'c': /* or lowercase c */
            ++cCount; /* increment cCount */
                break; /* necessary to exit switch */

            case 'D': /* grade was uppercase D */
            case 'd': /* or lowercase d */
            ++dCount; /* increment dCount */
                break; /* necessary to exit switch */

            case 'F': /* grade was uppercase F */
            case 'f': /* or lowercase f */
            ++fCount; /* increment fCount */
                break; /* necessary to exit switch */

            case '\n': /* Ignore new lines, */
            case '\t': /* tabs, */
            case ' ': /* and spaces in input */
                break; /* exit switch */

            default: /* catch all other characters */
                printf( "Incorrect letter grade entered.\n" );
                printf( "Enter a new grade.\n" );
                break; /* optional; will exit switch anyway */

        } /* end switch */


    } /* end while */

    /* Output summary of results */

    printf( "\nTotals for each letter grade are:\n" );
    printf( "A: %d\n", aCount );
    printf( "B: %d\n", bCount );
    printf( "C: %d\n", cCount );
    printf( "D: %d\n", dCount );
    printf( "F: %d\n", fCount );

    return 0; /* indicate program ended successfully */



} /* end main function */
