/* Calculate the product of three integers */
#include <stdio.h>

int main ( void )
{
    int x, y, z, result; /* declare the variables */

    printf( "Enter three integers: " ); /* prompt */
    scanf( "%d%d%d", &x, &y, &z ); /* read three integers */

    result = x * y * z; /* multiply values */

    printf( "The product is %d\n", result ); /* display result */

    return 0;
} /* end function main */
