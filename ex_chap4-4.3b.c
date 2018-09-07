/* Ex 4.3b - ex_chap4-4.3b.c
    Print the value 333.546372 in a field width of 15 characters with precisions of 1, 2, 3, 4 and 5.
    Left justify the output. What are the five values that print?
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    float x = 333.546372;

    // Data Output

    printf( "\nThe number 333.546372 with a precision of 1 is: %.1f\n\n", x );
    printf( "\nThe number 333.546372 with a precision of 2 is: %.2f\n\n", x );
    printf( "\nThe number 333.546372 with a precision of 3 is: %.3f\n\n", x );
    printf( "\nThe number 333.546372 with a precision of 4 is: %.4f\n\n", x );
    printf( "\nThe number 333.546372 with a precision of 5 is: %.5f\n\n", x );

    return 0;


} /* end main function */
