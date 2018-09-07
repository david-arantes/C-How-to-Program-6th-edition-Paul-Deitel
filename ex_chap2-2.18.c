/* 2.18 - This program asks the user two integers, obtains the numbers from the user, then prints the larger number
followed by the words "is larger." If the numbers are equal, print the message "These numbers are equal." */

#include <stdio.h>

int main( void )
{

    //Variables

    int number1, number2;

    //Data Input

    printf(" Please, insert two integers to compare.\n\n");
    printf(" Type the first number:  ");
    scanf("%d", &number1);
    printf(" Type the second number:  ");
    scanf("%d", &number2);

    // Processing the data

    if ( number1 < number2 )
    {
        printf(" \n\nThe larger number is: %d \n\n\n", number2);
    }
    if ( number1 > number2 )
    {
        printf(" \n\nThe larger number is: %d  \n\n\n", number1);
    }
    if ( number1 == number2 )
    {
        printf(" \n\nThese numbers are equal! \n\n\n");
    }

    return 0;



}
