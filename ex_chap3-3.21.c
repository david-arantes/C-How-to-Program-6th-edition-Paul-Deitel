/* Ex 3.21 (Salary Calculator) Develop a C program that will determine the gross pay for each of several
employees. The company pays "straight time" for the first 40 hours worked by each employee and
pays "time-and-a-half" for all hours worked in excess of 40 hours. You're given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of each employee.
Your program should input this information for each employee, and should determine and display the employee's gross pay.
*/

//2. Pseudocode
//  Calculate weekly salaries for employee
//  While the user has not entered the sentinel
//      Input the hours worked
//      Input salary rate of the worker
//      If hours worked is greater than 40
//          Calculate time-and-a-half for any hours over 40
//      Print salary for employee
//  end while

#include <stdio.h>
#include <stdbool.h>

int main ( void )
{
    // Variables

    float hours, rate, salary, overtime, overtimePay;

    // Data Input and Processing

    while (true)
    {
        printf( "\nEnter number of hours worked (-# to end ): " );
        scanf( "%f", &hours );

        if ( hours < 0 )
        {
            return 0;
        } /* end if */

        printf( "\nEnter hourly rate of the worker ($00.00): " );
        scanf( "%f", &rate );

        salary = hours * rate;

        if ( hours <= 40 )
        {
            printf( "\nSalary is %.2f\n", salary );
        } /* end if */

        if ( hours > 40 )
        {
            overtime = hours - 40;
            overtimePay = overtime * rate /2;
            salary = salary + overtimePay;
            printf( "\nSalary is %.2f\n", salary );
        } /* end if */


    } /* end while */


    return 0;

} /* end main function */
