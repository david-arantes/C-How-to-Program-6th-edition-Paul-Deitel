/* This program reads two integers and then determines and prints if the first is a multiple of the second. */

#include <stdio.h>

int main( void )
{

    // Variables

    int number1, number2, result;

    // Data Input

    printf( "This program checks two integers, and check if the first is a multiple of the second.\n\n" );

    printf( "Type the first number: " );
    scanf("%d", &number1);
    printf( "Type the second number: " );
    scanf("%d", &number2);

    // Data Processing

    result = number1 % number2;

    // Data Output

    if ( result == 0 )
    {
        printf( "\nThe first number, %d is a multiple of %d.\n\n", number1,number2 );
    }

    else
    {
        printf( "\nThe first number, %d is NOT a multiple of %d.\n\n", number1,number2 );
    }

    return(0);

}
