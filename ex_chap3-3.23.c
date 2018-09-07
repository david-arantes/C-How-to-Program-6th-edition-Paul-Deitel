/* Exercise 3.23
(Printing Numbers from a loop) Write a program that utilizes looping to print the numbers from 1 to 10 side by side
on the same line with three spaces between numbers.
*/

#include <stdio.h>

int main ( void )
{
    int x = 1;

    while ( x <= 10 )
    {
        printf( "%d   ", x );
        x++;
    } /* end while */

    return 0;

} /* end main function */
