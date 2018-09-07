/* Exercise 3.35 (Palindrome Tester) A palindrome is a number or a text phrase that reads the same
backward as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not it's a palindrome.
[Hint: Use the division and remainder operators to separate the number into its individual digits.]

0 1 2 3 4
1 2 3 2 1

*/

#include <stdio.h>

int main ( void )
{
    int n, a, b, c, d, e;
    int digit = 0;

    printf( "\nEnter one 5 digit number: " );
    scanf( "%d", &n );

    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;

    if ( a == e && b == d )
    {
        printf( "\nPalindrome!\n" );
    } /* end if */

    if ( a!= e || b!= d )
    {
        printf("\nNot a palindrome... \n");
    } /* end second if */

    return 0;


} /* end main function */
