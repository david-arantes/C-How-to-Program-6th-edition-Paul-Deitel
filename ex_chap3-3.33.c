/* Exercise 3.33 (Square of Asterisks) Write a program that reads in the side of a square and then prints that square
out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program
reads a size of 4, it should print:

****
****
****
****

*/

#include <stdio.h>

int main ( void )
{
    int line = 0, side, stars;

    printf( "What size is your square? " );
    scanf( "%d", &side );

    while ( line < side )
    {
        stars = 0;

        while( stars < side )
        {
            printf("*");
            stars++;
        } /* end inner while */

        printf("\n");
        line++;

    } /* end outer while */

    return 0;

} /* end main function */
