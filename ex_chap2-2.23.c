/* This program reads five integers and then determines and prints the largest and
the smallest integers in the group. */

#include <stdio.h>

int main( void )
{
    //Variables

    int num1, num2, num3, num4, num5, largest, smallest;

    // Data Input

    printf( "This program reads five integers, and then shows you the largest and the smallest in that group.\n\n" );
    printf( "Please, type the first number: " );
    scanf( "%d", &num1 );
    printf( "Please, type the second number: " );
    scanf( "%d", &num2 );
    printf( "Please, type the third number: " );
    scanf( "%d", &num3 );
    printf( "Please, type the fourth number: " );
    scanf( "%d", &num4 );
    printf( "Please, type the fifth number: " );
    scanf( "%d", &num5 );

    // Data Processing and Output

    if ( num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 )
    {
        printf( "\n\nThe number one, which is %d, is the largest one.\n\n", num1 );
    }

    if ( num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 )
    {
        printf( "\n\nThe number two, which is %d, is the largest one.\n\n", num2 );
    }

    if ( num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 )
    {
        printf( "\n\nThe number three, which is %d, is the largest one.\n\n", num3 );
    }

    if ( num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 )
    {
        printf( "\n\nThe number four, which is %d, is the largest one.\n\n", num4 );
    }

    if ( num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 )
    {
        printf( "\n\nThe number five, which is %d, is the largest one.\n\n", num5 );
    }

    if ( num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5 )
    {
        printf( "\nThe number one, which is %d, is the smallest one.\n\n", num1 );
    }

    if ( num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5 )
    {
        printf( "\nThe number two, which is %d, is the smallest one.\n\n", num2 );
    }

    if ( num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5 )
    {
        printf( "\nThe number three, which is %d, is the smallest one.\n\n", num3 );
    }

    if ( num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5 )
    {
        printf( "\nThe number four, which is %d, is the smallest one.\n\n", num4 );
    }

    if ( num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4 )
    {
        printf( "\nThe number five, which is %d, is the smallest one.\n\n", num5 );
    }

    return(0);

}
