/* 2.20 - ( Diameter, Circumference and Area of a Circle ), this program reads in the radius
of a circle and prints the circle's diameter, circumference and Area. Use the constant Pi equal to 3.14159. */

#include <stdio.h>

int main ( void )
{

    // Variables and constants

    float pi;
    float diameter, circumference, area, radius;
    int option;
    pi = 3.14159;


    // Data Input

    printf("\tThis is a program to calculate a circle's diameter, circumference and area.");
    printf("\n\nIf you know the radius, press \"1\"\n");
    printf("If you know the circumference, press \"2\"\n");
    printf("If you know the area, press \"3\"\n");

    // Data Process

    scanf( "%d", &option );

    if ( "option == 1" )
    {

    printf("\nType the radius of the circle: ");
    scanf( "%f", &radius );

    // Data Processing
    diameter = radius * 2;
    circumference = 2 * pi * radius;
    area = pi * ( radius * radius );

    // Data Output
    printf("\nThe diameter of the circle is %.2f cm.\n", diameter);
    printf("The circumference of the circle is %.2f cm.\n", circumference);
    printf("The area of the circle is %.2f cm.\n", area);

    }

    if ( "option == 2" )
    {
    printf("\nType the circumference of the circle: ");
    scanf( "%f", &circumference );

    // Data Processing

    radius = 2 * pi * circumference;



    }

    return 0;


}
