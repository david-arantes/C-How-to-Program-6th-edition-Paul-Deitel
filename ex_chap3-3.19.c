/* (Sales Commission Calculator) One large chemical company pays its salespeople on a comission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week. For example, a salesperson
who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650. Develop a program
that will input each salesperson's gross sales for last week and will calculate and display that salesperson's earnings.
Process one salesperson's figures at a time.

2. Psedocode

    Calculate salespeople's total earnings for the week
    While the sentinel has not been entered by the user
        Input salesperson's gross sales for last week
        Calculate 9% of gross sales
        Add $200 to 9% of gross sales
        Print earnings
    end while
*/

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{

    // Variables

    float sales, commission, earnings;

    // Processing

    while(true)
    {
        printf( "\nEnter sales in dollars (-1 to end): " );
        scanf( "%f", &sales );

        if ( sales == -1 )
        {
            return 0;
        } /* end if */

        commission = sales / 100 * 9;
        earnings = commission + 200;

        printf( "\nThe salary is %.2f dollars.\n", earnings );

    } /* end while */

    return 0;

} /* end main function */
