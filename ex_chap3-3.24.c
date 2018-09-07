/* Exercise 3.24
(Find the Largest Number) The process of finding the largest number (i.e., the maximum of a group of numbers)
is used frequently in computer applications. For example, a program that determines the winner of a sales contest would
input the number of units sold by each salespearson. The salesperson who sold the most units wins the contest. Write a pseudocode program
and then a program that inputs a series of 10 numbers and determines and prints the largest of the numbers.
[Hint: Your program should use three variables as follows]:

counter:

number:

largest:


*/

// Pesudocode
// Find and print the largest number
// Intialize counter to zero
// Initialize number to zero
// While the amount of entries is less than or equal to ten
//      Print "Enter a number: "
//      Input to number variable

#include <stdio.h>

int main ( void )
{

    int counter = 0, number = 0, largest = 0;

    while ( counter < 10 )
    {
        printf( "\nEnter a number: " );
        scanf( "%d", &number );

        if ( number >= largest )
        {
            largest = number;
        } /* end if */

        counter++;

    } /* end while */

    printf( "\nThe largest number is %d.\n", largest );

    return 0;

} /* end main function */

