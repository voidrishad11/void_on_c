#include <stdio.h>

void main ()
{
   float a,b;
   printf("Enter two numbers\n");
   scanf("%f %f",&a,&b);
   float sum_add,sum_sub,sum_mul,sum_div;
   sum_add = a+b;
   sum_sub = a-b;
   sum_mul = a*b;
   sum_div = a/b;
   printf("The Summation of a and b is %.2f\nThe Substraction of a and b is %.2f\nThe Addition of a and b is %.2f\nThe Division of a and b is %.2f\n",sum_add,sum_sub,sum_mul,sum_div);
}