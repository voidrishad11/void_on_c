#include <stdio.h>

void main ()
{
   int a,b,x;
   printf("Enter A \t:");
   scanf("%d",&a);
   printf("Enter B \t:");
   scanf("%d",&b);
   x=a;
   a=b;
   b=x;
   printf("\n\nA is now\t:%d\n",a);
   printf("B is now\t:%d\n",b);

}
