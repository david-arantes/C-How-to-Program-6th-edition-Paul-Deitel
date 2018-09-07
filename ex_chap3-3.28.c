/* Exercise 3.28 (Validating User Input) Modify the program in 3.10 to validate its inputs.
On any input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
*/

#include <stdio.h>

/* function main begins program execution */

int main ( void )
{

    /* Initialize variables in definitions */

    int passes = 0; /* number of passes */
    int failures = 0; /* number of failures */
    int student = 1; /* student counter */
    int result; /* One exam result */

    /* Process 10 students using counter-controlled loop */

    while ( student <= 10 )
    {
        /* Prompt user for input and obtain value from user */

        printf( "\nEnter result ( 1=pass, 2=fail ): " );
        scanf( "%d", &result );

        while ( result != 1 && result != 2 )
        {
            printf( "\nInvalid option, please enter the correct result ( 1=pass, 2=fail ): " );
            scanf( "%d", &result );
        } /* end second while */

        /* If result 1, increment passes */
        if ( result == 1 )
        {
            passes++;
        }

        /* If result 2, increment failures */
        if ( result == 2 )
        {
            failures++;
        }


        student++;

    } /* end while */

    /* Termination phase; display number of passes and failures */
    printf( "\n\nPassed: %d\n", passes );
    printf( "Failed: %d\n", failures );

    /* if more than eight students passed, print "Bonus to instructor!" */
    if ( passes > 8 )
    {
        printf( "\n\nBonus to instructor! \n" );
    } /* end if */

    else
    {
        printf( "\n\nThe instructor is bullshit!\n\n" );
    } /* end else */

    return 0;

} /* end main function */
