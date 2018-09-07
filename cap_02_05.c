/* This program reads a four digit number and inverts is */

#include <stdio.h>

int main ( void )
{
    // Variables

    int valor_inicial, valor_temp, milhar, centena, dezena, unidade, valor_invertido;

    // Data Input

    printf( "\nType the number: " );
    scanf( "%d", &valor_inicial );

    // Data Processing

    valor_temp = valor_inicial;

    milhar = valor_temp / 1000;
    valor_temp = valor_temp % 1000;

    centena = valor_temp / 100;
    valor_temp = valor_temp % 100;

    dezena = valor_temp / 10;
    valor_temp = valor_temp % 10;

    unidade = valor_temp;

    valor_invertido = unidade * 1000;
    valor_invertido = valor_invertido + (dezena * 100);
    valor_invertido = valor_invertido + (centena * 10);
    valor_invertido = valor_invertido + milhar;

    // Data Output

    printf( "\nThe inverted number is: %d.\n\n", valor_invertido );

    return 0;


} /* end main function */
