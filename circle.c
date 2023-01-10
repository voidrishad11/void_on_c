/*4. Write a program that reads in the radius of a circle and prints the circle’s diameter,
circumference and area. Use the constant value 3.14159 for π. Perform each of these calculations
inside the printf statement(s) and use the conversion specifier %f.*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159

void main()
{
    float r;
    printf("Please Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("\n\nThe Diameter of the circle is\t\t:\t%.3f\nThe Circumference of the circle is\t:\t%.3f\nThe Area of the circle is\t\t:\t%.3f\n\n\n",2*r,2*PI*r,PI*r*r);
}