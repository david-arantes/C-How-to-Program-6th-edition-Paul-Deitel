/* Ex 3.13 */

#include <stdio.h>

int main ( void )
{

    int x = 1, total = 0, y;

    while ( x <= 10 )
    {
        y = x * x;
        printf( "%d\n", y );
        total += y;
        ++x;
    } /* end while */

    printf("\nTotal is %d.\n", total);

    return 0;

} /* end main */
