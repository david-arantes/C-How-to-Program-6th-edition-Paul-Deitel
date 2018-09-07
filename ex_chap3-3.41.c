/* Exercise 3.41 (Multiples of 2 with Infinite Loop)
Write a program that keeps printing the multiples of the integer 2, namely 2,4,6,8,16,32,64, and so on.
Your loop should not terminate(i.e., you should create an infinit loop). What happens when you run this program?
*/

#include <stdio.h>

int main ( void )
{

    int counter = 1, multiple;

    while ( counter > 0 )
    {
        multiple = counter + counter;

        printf( "%d\n", multiple );

        counter = multiple;

    } /* end while */

    return 0;


} /* end main function */
