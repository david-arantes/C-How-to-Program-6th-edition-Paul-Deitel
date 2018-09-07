/* 2.19 - Program that inputs three different integers from the keyboard, then prints the sum,
the average, the product, the smallest and the largest of these numbers. */

#include <stdio.h>

int main ( void )
{

    // Variables

    int num1, num2, num3;
    int sum, average, product, smallest, largest;

    // Data Input

    printf( "Please, input three different integers: " );
    scanf( "%d%d%d", &num1, &num2, &num3 );

    // Data Processing

    sum = num1 + num2 + num3; // Sum
    average = (num1 + num2 + num3)/3; // Average
    product = (num1 * num2 * num3); // Product

    // Data Output

    printf("The sum is: %d\n", sum);
    printf("The average is: %d\n", average);
    printf("The product is: %d\n", product);

    // If conditions to check the smallest number.

    if ( num1 < num2 && num1 < num3 )
    {
    printf("The smallest number is: %d\n", num1);
    }
    if ( num2 < num1 && num2 < num3 )
    {
    printf("The smallest number is: %d\n", num2);
    }
    if ( num3 < num1 && num3 < num2 )
    {
    printf("The smallest number is: %d\n", num3);
    }

    // If conditions to check the largest number.

    if ( num1 > num2 && num1 > num2 )
    {
    printf("The largest number is: %d\n", num1);
    }
    if ( num2 > num1 && num2 > num3 )
    {
    printf ("The largest number is: %d\n", num2);
    }
    if ( num3 > num1 && num3 > num2 )
    {
    printf("The largest number is: %d\n", num3);
    }



    return 0;

}
