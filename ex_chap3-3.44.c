/* Exercise 3.44 (Sides of a Triangle)
Write a program that reads three nonzero float values and determines and prints
if they could represent the sides of a triangle.
*/

#include <stdio.h>

int main ( void )
{

    float x, y, z;

    printf( "\nEnter first value: " );
    scanf( "%f", &x );

    while ( x <= 0 )
    {
        printf( "\nEnter first value: " );
        scanf( "%f", &x );
    } /* end 1 while */

    printf( "\nEnter second value: " );
    scanf( "%f", &y );

    while ( y <= 0 )
    {
        printf( "\nEnter second value: " );
        scanf( "%f", &y );
    } /* end 2 while */

    printf( "\nEnter third value: " );
    scanf( "%f", &z );

    while ( z <= 0 )
    {
        printf( "\nEnter third value: " );
        scanf( "%f", &z );
    } /* end 3 while */

    if ( x == y && x == z && y == z )
    {
        printf( "\n\nCould be a tringle!\n" );
    }
    else
    {
        printf( "\n\nNot an equilateral triangle!\n" );
    }

    return 0;

} /* end main function */
