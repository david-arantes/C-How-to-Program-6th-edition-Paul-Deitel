/* Ex 4.3d - ex_chap4-4.3d.c
    Print the integers from 1 to 20 using a while loop and the counter variable x.
    Assume that the variable x has been defined, but not initialized. Print only five digits per line.
    [Hint: Use the calculation x % 5. When the value of this is 0, print a new line character, otherwise print a tab character.]
*/

#include <stdio.h>

int main ( void )
{
    // Variable

    int x = 1;

    // Data Processing and output

    while ( x <= 20 )
    {
        printf( "%d", x );

        if ( x % 5 == 0)
        {
            printf( "\n" );
        } /* end if */

        else
        {
            printf( "\t" );
        } /* end else */

        x++;

    } /* end while */

    return 0;

} /* end main function */
