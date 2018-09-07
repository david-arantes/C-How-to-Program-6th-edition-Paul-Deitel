/* Determine the values of variables product and x after the following calculation is performed.
Assume that product and x each have the value 5 when the statement begins executing.
product *= x++;
*/

#include <stdio.h>

int main( void )
{
    /* Variables */

    int product, x;

    /* Variables initialization */

    product = 5;
    x = 5;

    /* Processing and output */

    product *= x++;

    printf( "\nThe product is: %d.\n", product );
    printf( "\nThe X now is: %d.\n", x );

    return 0;


} /* end main function */

