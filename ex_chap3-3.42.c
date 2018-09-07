/* Exercise 3.42 (Diameter, Circumference and Area of a Circle)
Write a program that reads the radius of a circle ( as a float value ) and computes and prints the diameter,
the circumference and the area. Use the value 3.14159 for pi.
*/


#include <stdio.h>

int main ( void )
{

    // Variables

    float pi, radius, diameter, circumference, area;

    pi = 3.14159;

    // Data Input

    printf( "\n\n(Diameter, Circumference and Area of a Circle)\n\n" );

    printf( "Please, insert the radius of the circle: ");
    scanf( "%f", &radius );

    // Processing phase

    diameter = 2 * radius;

    circumference = 2 * pi * radius;

    area = pi * ( radius * radius );

    // Data Output

    printf( "\nThe diameter is %.2f m.u", diameter );

    printf( "\nThe circumference of the circle is: %.2f m.u\n", circumference );

    printf( "The area of the circle is %.2f m.u.\n\n", area );

    return 0;


} /* end main function */
