/* Exercise  3.31 (Dangling Else Problem) Determine the output for each of the following when x is 9 and y
is 11, and when x is 11 and y is 9. The compiler ignores the indentation in a C program. Also, the compiler
always associates an else with the previous if unless told to do otherwise by the placement of braces {}.
Because, on first glance, you may not be sure which if an else matches, this is referred to as the "dangling else"
problem. We eliminate the indentation from the following code to make the problem more challenging.
[Hint: Apply indentation conventions you have learned.]
*/

#include <stdio.h>

int main ( void )
{

    // Variables

    int x, y;

    // Data Input

    printf( "\nPlease, set the value of x, must be 11 or 9: " );
    scanf( "%d", &x );
    if ( x != 11 && x != 9 )
    {
        while ( x != 11 && x != 9 ){
            printf( "\nPlease, set the value of x, must be 11 or 9: " );
            scanf( "%d", &x );
        } /* end while */

    } /* end if */

    printf( "\nPlease, set the value of y, must be 11 or 9: " );
    scanf( "%d", &y );
    if ( y != 11 && y != 9 )
    {
        while ( y != 11 && y != 9 )
        {
            printf( "\nPlease, set the value of y, must be 11 or 9: " );
            scanf( "%d", &y );
        } /* end while */

    } /* end if */

    // Data output

    if ( x < 10 )
    {
    if ( y > 10 )
    printf( "*****\n" );
    } /* end first if */
    else
    {
    printf( "#####\n" );
    printf( "$$$$$\n" );
    }

    return 0;

} /* end main function */
