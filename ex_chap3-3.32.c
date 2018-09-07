/* Exercise 3.32 (Another Dangling Else Problem) Modify the following code to produce the output shown.
Use proper indentation techniques. You may not make any changes other than inserting braces, The compiler
ignores the indentation in a program. We eliminated the indentation from the following code to make the problem more challenging.
[Note: It's possible that no modification  is necessary.]
*/

#include <stdio.h>

int main ( void )
{

    // Variables

    int x, y;

    // Data Input

    printf( "\nPlease, set the value of x: " );
    scanf( "%d", &x );

    printf( "\nPlease, set the value of y: " );
    scanf( "%d", &y );

    // Processing and Data Output

    if ( y == 8 )
    {
    if ( x == 5 )

    printf( "@@@@@\n" );
    } /* end first if */
    else
    {
    printf( "#####\n" );
    printf( "$$$$$\n" );
    printf( "&&&&&\n" );
    }

    return 0;

} /* end main function */
