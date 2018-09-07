/* Ex. 4.16:    ex_chap4-4.16.c
   (Triangle Printing Program) This program prints asterisks. Use for loops to generate the patterns.
*/

#include <stdio.h>

int main ( void )
{
    int line;   /* line number */
    int astsk;  /* Asterisks counter */
    int blank;  /* blank counter */

    /* A */
    printf("(A)\n");

    for ( line = 1; line <= 10; line++ )
    {
        for ( astsk = 1; astsk <= line; astsk++ )
            printf("*");
        printf("\n");

    } /* end for */
    printf("\n");

    /* B */
    printf("(B)\n");

    for ( line = 10; line >= 1; line-- )
    {
        for ( astsk = 1; astsk <= line; astsk++ )
            printf("*");
        printf("\n");

    } /* end for */
    printf("\n");

    /* C */
    printf("(C)\n");

    for ( line = 1; line <= 10; line++ )
    {
        /* blank = line -1 */
        for ( blank = 1; blank <= 11 - line; blank++ )
            printf(" ");
        for ( astsk = 1; astsk <= 11 - line; astsk++ )
            printf("*");

        printf("\n");

    } /* end for */
    printf("\n");

    /* D */
    printf("(D)\n");

    for ( line = 1; line <= 10; line++ )
    {
        /* blank = 10 - line */
        for ( blank = 1; blank <= 10 - line; blank++ )
            printf(" ");
        /* astsk = line */
        for ( astsk = 1; astsk <= line; astsk++ )
            printf("*");

        printf("\n");

    } /* end for */

    printf("\n");

    return 0;


} /* end main function */
