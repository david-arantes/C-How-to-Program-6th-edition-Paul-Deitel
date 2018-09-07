/* Exercise 3.27 (Find the two largest numbers) Using an approach similar to Exercise 3.24, find the two
largest values of the 10 numbers. [Note: You may input each number only once.]
*/

#include <stdio.h>

int main ( void )
{
    int counter = 0, number = 0, largest = 0, secondLargest = 0;

    while ( counter < 10 )
    {
        printf( "\nEnter a number: " );
        scanf( "%d", &number );

        if ( number > largest )
        {
            secondLargest = largest;
            largest = number;
        } /* end if */

        if ( number < largest )
        {
            if ( number > secondLargest )
            {
                secondLargest = number;
            }
        } /* end if */

        counter++;

    } /* end while */

    printf( "\nThe largest number is %d.\n", largest );
    printf( "\nThe second largest number is %d.\n", secondLargest );

    return 0;

} /* end main function */
