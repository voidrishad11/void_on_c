#include<stdio.h>
#include<math.h>
#define PI 3.14159

void main()
{
    float r,d,a,c;
    printf("Please Enter the radius of the circle\n");
    scanf("%f",&r);
    d = 2*r ;
    c = 2*PI*r ;
    a = PI*pow(r,2);
    printf("The Diameter of this circle is\t%.3f\nThe circumference of this circle is\t%.3f\nThe Area of this circle is\t%.3f\n",d,c,a);
}