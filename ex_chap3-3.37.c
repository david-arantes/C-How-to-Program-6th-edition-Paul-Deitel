/* Exercise 3.37
(How fast is your computer?) How can you determine how fast is your own computer really
operates? Write a program with a while loop that counts from 1 to 300,000,000 by 1s. Every time
the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to time
how long each 100 million repetitions of the loop takes.
*/

#include <stdio.h>

int main ( void )
{
    int i = 0;
    int x = 100000000;
    int y = 200000000;
    int z = 300000000;

    while ( i <= z )
    {
        if ( i == x )
        {
            printf( "\n%d\n", x );
        } /* end first if */

        if ( i == y )
        {
            printf( "\n%d\n", y );
        } /* end second if */

        if ( i == z )
        {
            printf( "\n%d\n", z );
        } /* end third if */

        i++;


    } /* end while */

    return 0;

} /* end main function */
