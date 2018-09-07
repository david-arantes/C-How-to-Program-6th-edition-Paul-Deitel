/* 3.18 (Credit Limit Calculator) - Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
    a) Account number
    b) Balance at the beginning of the month
    c) Total of all items charged by this customer this month
    d) Total of all credits applied to this customer's account this month
    e) Allowed credit limit

The program should input each of these facts, calculate the new balance (= beginning balance + charges - credits),
and determine if the new balance exceeds the customer's credit limit. For those customers whose credit limit is exceeded,
the program should display the customer's account number, credit limit, new balance and the message "Credit limit exceeded."

*/

// 2. Pseudocode
//  Determine if a customer has exceeded their credit limit
//  While the user has not entered the sentinel
//      Input the customer's account number
//      Input the customer's balance at the beginning of the month
//      Input the customer's total charges for this month
//      Input the customer's total credits for this month
//      Input the customer's credit limit
//      Add the beginning balance to the charges this month and subtract any credits
//      If the new balance is greater than the customer's credit limit
//          Print the customer's account number, credit limit, new balance, and the the message "Credit limit exceeded."
//  end while

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{
    // Variables

    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, accountBalance;

    // Data input and Processing

    while(true)
    {
            printf( "Enter account number ( -1 to end ): " );
            scanf( "%d", &accountNumber );

            if ( accountNumber == -1 )
            {
                return 0;
            } /* end if */



    printf( "\nEnter beginning balance: " );
    scanf( "%f", &beginningBalance );
    printf( "\nEnter total charges: " );
    scanf( "%f", &totalCharges );
    printf( "\nEnter total credits: " );
    scanf( "%f", &totalCredits );
    printf( "\nEnter credit limit: " );
    scanf( "%f", &creditLimit );

    accountBalance = beginningBalance + totalCharges - totalCredits;

    if ( accountBalance > creditLimit )
    {
        printf( "\n\nAccount:\t%d\n", accountNumber );
        printf( "Credit Limit:\t%.2f\n", creditLimit );
        printf( "Balance:\t%.2f\n", accountBalance );
        printf( "Credit limit exceeded.\n" );

    } /* end if */

    } /* end while */

    return 0;

} /* end main function */
