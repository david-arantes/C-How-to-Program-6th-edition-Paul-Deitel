/* 2.16 - Asks the user to enter two numbers,
          obtains them from the user and prints their sum,
          product, difference, quotient and remainder. */
#include <stdio.h>

int main ( void )
{

    int number1, number2, sum, product;
    int difference, quotient, remainder;

    printf( " This program makes some calculations with 2 numbers.\n\n " );

    printf( " Insert the first integer:  " );
    scanf( "%d", &number1 );

    printf( " Insert the second integer:  " );
    scanf( "%d", &number2 );

    /* Processing part */

    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    /* Output */

    printf( " \n\n\nThe sum is: %d \n\n", sum );
    printf( " The product is:  %d \n\n", product );
    printf( " The difference is: %d \n\n ", difference );
    printf( " The quotient is: %d \n\n ", quotient );
    printf( " The remainder is %d \n\n ", remainder );

    return 0;


}
