/* 3.8 - That program uses the statements in the Exercise 3.7 to calculate x raised to the y power.
This program should have a while repetition control statement. */

#include <stdio.h>

int main ( void )
{
    int x, i, y, power; /* define variables */

    i = 1; /* initialize i */

    power = 1; /* initialize power */
    scanf( "%d", &x ); /* read value for x from user */
    scanf( "%d", &y ); /* read value for y from user */

    while ( i <= y ) /* loop while i is less than or equal to y */
    {
        power *= x; /* multiply power by x */
        ++i; /* increment i */
    } /* end while */

    printf( "%d", power ); /* display power */

    return 0;

} /* end main function */
