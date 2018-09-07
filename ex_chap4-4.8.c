/* Ex. 4.8: ex_chap4-4.8.c
*/

#include <stdio.h>

int main ( void )
{
    int x;
    int y;
    int i;
    int j;

    /* Prompt user for input */
    printf("\n");
    printf( "Enter two integers in the range 1-20: " );
    scanf( "%d%d", &x, &y ); /* read values for x and y */

    for ( i = 1 ; i <= y ; i++ ) // count from 1 to y
    {

        for ( j = 1 ; j <= x ; j++ ) // count from 1 to x
        {
            printf("@"); /* Output @ */
        } /* end inner for */

        printf("\n"); // begin new line

    } /* end outer for */

    return 0;

} /* end main function */
