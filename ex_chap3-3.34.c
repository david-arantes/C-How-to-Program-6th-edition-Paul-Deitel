/* Exercise 3.34 (Hollow Square of Asterisks) Modify the program your wrote in Exercise 3.33 so that it prints
a follow square, For example, if your program reads a size of 5, it should print:

01234   line    side = 5
*****     0
*   *     1
*   *     2
*   *     3
*****     4     side - 1

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

        while ( stars < side )
        {
            if ( line == 0 || line == side -1 || stars == 0 || stars == side - 1 )
            {
                printf("*");
            } /* end if */

            else
            {
                printf(" ");
            } /* end else */

            stars++;


        } /* end inner while */

        printf("\n");

        line++;

    } /* end outter while */

    return 0;



} /* end main function */
