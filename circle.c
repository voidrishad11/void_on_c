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
    a = PI*r*r;
    printf("\n\nThe Diameter of this circle is %.3f\nThe Circumference of this circle is %.3f\nThe Area of this circle is %.3f\n\n\n",d,c,a);
}