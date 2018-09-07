/* This program reads an integer and determines and prints whether it is odd or even. */

#include<stdio.h>

int main( void )
{
    // Variables

    int number;

    // Data Input

    printf( "\t\tThis program checks if a number is odd or even.\n\n" );

    printf( "Please, type the number: " );
    scanf( "%d", &number );

    // Data Processing

    if ( number % 2 == 0 )
    {
        printf( "\n\nThe number %d, is even.\n\n", number );
    }

    else
    {
        printf( "\n\nThe number %d, is odd.\n\n", number );
    }

    return(0);
}
