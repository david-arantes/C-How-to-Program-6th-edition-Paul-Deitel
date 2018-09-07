/* Ex.3.20 (Interest Calculator) The simple interest on a loan is calculated by the formula:

            interest = principal * rate * days / 365;

The preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365(days).

*/

//2. Pesudocode
//  Calculate the interest charge of a given loan
//  While the user has not entered the sentinel
//      Input the loan principal
//      Input the interest rate
//      Input the term of the loan in days
//      Print the interest charge
//  end while

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{

    // Variables
    int days;
    float principal, rate, interest;

    // Data Input and Processing

    while(true)
    {
      printf( "\nEnter the loan principal (-# to end): " );
      scanf( "%f", &principal );

      if( principal < 0 )
      {
        return 0;
      } /* end if */

      printf( "\nEnter interest rate: " );
      scanf( "%f", &rate );
      printf( "\nEnter term of the loan in days: " );
      scanf( "%d", &days );

      // Processing

      interest = principal * rate * days / 365;

      // Data Output

      printf( "\nThe interest charge is $%.2f.\n", interest );

    } /* end while */

    return 0;

} /* end main function */
