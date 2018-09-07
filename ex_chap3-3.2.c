/* ex_chap3-3.2:
   Four different statements that add 1 to integer variable X.
*/

#include <stdio.h>

int main( void )
{

    int x;

    x = x + 1;
    x += 1;
    ++x;
    x++;

    printf( "\n%d\n", x);

} /* End main function */
