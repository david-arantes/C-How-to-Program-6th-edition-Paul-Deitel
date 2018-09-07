/* Calculate the sum of integers from 1 to 10 */

#include <stdio.h>

int main ( void )
{
    int sum, x; /* define variable sum and x */

    x = 1; /* initialize x */
    sum = 0; /* initialize sum */

    while ( x <= 10 )
    { /* loop while x is less than or equal to 10 */
        sum += x; /* add x to sum */
        ++x; /* increment x */
    } /* end while */

    printf( "\nthe sum is: %d\n", sum ); /* display sum */

    return 0;

} /* end main function */
