/* Exercise 3.38
Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your program
should print a newline character. [Hint: Count from 1 to 100. Use the remainder operator to recognize
each time the counter reaches a multiple of 10.]
*/

#include <stdio.h>

int main ( void )
{

    // Variables

    int i = 1;
    int x = 0;

    // Process phase

    while ( i <= 100 )
    {
        x = i % 10;
        printf( "* " );

        if ( x == 0 )
        {
            printf( "\n" );
        } /* end if */

        i++;


    } /* end while */

    return 0;

} /* end main function */
