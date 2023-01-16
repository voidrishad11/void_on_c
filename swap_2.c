#include <stdio.h>

void main ()
{
   int a,b,x;
   printf("Enter A :\t\n");
   scanf("%d",&a);
   printf("Enter B :\t\n");
   scanf("%d",&b);
   x=a;
   a=b;
   b=x;
   printf("A is now\t\n");

}