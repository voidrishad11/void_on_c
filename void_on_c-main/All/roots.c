/*1. C program to Find all Roots of a Quadratic equation*/

#include<stdio.h>
#include<math.h> 

void main ()
{
    float a,b,c,r,x1,x2,i,discriminant;
    printf("Enter the value of a\t:\t"); 
    scanf("%f",&a);
    printf("Enter the value of b\t:\t"); 
    scanf("%f",&b);
    printf("Enter the value of c\t:\t"); 
    scanf("%f",&c);
    discriminant =(b*b-4*a*c);
    if(discriminant>0)
    {
        x1=(-b+ sqrt(discriminant))/(2*a); 
        x2=(-b- sqrt(discriminant))/(2*a); 
        printf("The Value of root1 is\t:\t%.3f\nThe Value of root2 is\t:\t%.3f\n\n",x1,x2); 
    }
    else if (discriminant==0)
    {
        x1=(-b/(2*a));
        x2=(-b/(2*a));
        printf("The Value of root1 is\t:\t%.3f\nThe Value of root2 is\t:\t%.3f\n\n",x1,x2); 
    }
    else
    {
        r=((-b)/(2*a));
        i=sqrt(discriminant);
        printf("The Roots are imaginary.\nReal part\t:\t%.3f\nImaginary part\t:\t%.3f\n",r,i);
    }
}