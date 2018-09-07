/* Ex. 4.5c:    ex_chap4-4.5c.c
    This program should input an integer and a character and print them.
    Assume the user types as input 100 A.
*/

#include <stdio.h>

int main ( void )
{
    // Variables

    int intVal;
    char charVal;

    // Data Input, Processing and Output

    printf( "\n\nType the number and the character: " );
    scanf( "%d", &intVal );
    charVal = getchar();

    printf( "Integer: %d\nCharacter: %c\n\n", intVal, charVal );

    return 0;

} /* end main function */
