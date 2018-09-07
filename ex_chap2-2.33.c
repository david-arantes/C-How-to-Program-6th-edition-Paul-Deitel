/* 2.33 (Car-Pool Savings Calculator) Research several car-pooling websites. This app calculates your daily driving cost, so that you can estimate how much money
could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The app should input
the following information and display the user's cost per day of driving to work:

a) Total kilometers driven per day.
b) Cost per liter of gasoline.
c) Average kilometers per liter.
d) Parking fees per day.
e) Tolls per day.

*/

#include <stdio.h>

int main( void )
{
    // Variables

    float km_home_to_work, total_km_day, cost_liter_gas, average_km_liter, parking_fee, toll;
    float daily_gas, daily_cost_gas, total_daily_cost;

    // Data Input

    printf( "\tThis Program calculates your daily driving cost!\n\n" );

    printf( "Please, tell me how much cost the liter of Gasoline: " );
    scanf( "%f", &cost_liter_gas );

    printf( "\nHow much kilometers your car do with 1 liter of Gas? " );
    scanf( "%f", &average_km_liter );

    printf( "\nHow much you pay for tolls? " );
    scanf( "%f", &toll );

    printf( "\nHow much you pay for Daily Parking fees? " );
    scanf( "%f", &parking_fee );

    printf( "\nHow much kilometers from your home to work? " );
    scanf( "%f", &km_home_to_work );

    // Data Processing

    total_km_day = (km_home_to_work * 2); // Total kilometers per day.

    daily_gas = (total_km_day / average_km_liter); // Gasoline used per day, which is total km per day divided by the average. - Liter used per day

    daily_cost_gas = (daily_gas * cost_liter_gas); // The price of each day of using Gas

    total_daily_cost = (daily_cost_gas + toll + parking_fee); // Total

    // Data Output

    printf( "\n\nThe total kilometers that you run per day is %.2f km.", total_km_day );

    printf( "\nThe amount of Gas used per day is %.2f liters.", daily_gas );

    printf( "\nThe daily cost per Gas used is %.2f reais.", daily_cost_gas );

    printf( "\nThe total cost per day is %.2f reais.\n\n", total_daily_cost );


    return(0);


}
