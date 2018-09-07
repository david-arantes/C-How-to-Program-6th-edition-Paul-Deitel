/* 2.31(Table of squares and cubes) - This program calculates the squares and cubes of the numbers from 0 to 10
and uses tabs to print the results */

#include <stdio.h>

int main( void )
{

    // Variables

    int a0, b1, c2, d3, e4, f5, g6, h7, i8, j9, k10, sq0, sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9, sq10;
    int cub0, cub1, cub2, cub3, cub4, cub5, cub6, cub7, cub8, cub9, cub10;

    // Constants

    a0 = 0;
    b1 = 1;
    c2 = 2;
    d3 = 3;
    e4 = 4;
    f5 = 5;
    g6 = 6;
    h7 = 7;
    i8 = 8;
    j9 = 9;
    k10 = 10;

    // Data Processing

    // Squares

    sq0 = (a0 * a0);
    sq1 = (b1 * b1);
    sq2 = (c2 * c2);
    sq3 = (d3 * d3);
    sq4 = (e4 * e4);
    sq5 = (f5 * f5);
    sq6 = (g6 * g6);
    sq7 = (h7 * h7);
    sq8 = (i8 * i8);
    sq9 = (j9 * j9);
    sq10 = (k10 * k10);

    // Cubes

    cub0 = (a0 * a0 * a0);
    cub1 = (b1 * b1 * b1);
    cub2 = (c2 * c2 * c2);
    cub3 = (d3 * d3 * d3);
    cub4 = (e4 * e4 * e4);
    cub5 = (f5 * f5 * f5);
    cub6 = (g6 * g6 * g6);
    cub7 = (h7 * h7 * h7);
    cub8 = (i8 * i8 * i8);
    cub9 = (j9 * j9 * j9);
    cub10 = (k10 * k10 * k10);

    // Data Output

    printf( "/tProgram that calculates the sqaures and cubes of the numbers from 0 to 10.\n\n" );

    printf( "Number\tSquare\tCube\n" );
    printf( "%d\t%d\t%d\n", a0, sq0, cub0 );
    printf( "%d\t%d\t%d\n", b1, sq1, cub1 );
    printf( "%d\t%d\t%d\n", c2, sq2, cub2 );
    printf( "%d\t%d\t%d\n", d3, sq3, cub3 );
    printf( "%d\t%d\t%d\n", e4, sq4, cub4 );
    printf( "%d\t%d\t%d\n", f5, sq5, cub5 );
    printf( "%d\t%d\t%d\n", g6, sq6, cub6 );
    printf( "%d\t%d\t%d\n", h7, sq7, cub7 );
    printf( "%d\t%d\t%d\n", i8, sq8, cub8 );
    printf( "%d\t%d\t%d\n", j9, sq9, cub9 );
    printf( "%d\t%d\t%d\n", k10, sq10, cub10 );


    return(0);


}
