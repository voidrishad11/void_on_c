#include<stdio.h>
#include<math.h>

void main()
{
    int i,n;
    printf("Please Enter the n th Number\n");
    scanf("%d",&n);
    i=1;
    float sum = 0.0;
    while(i<=n)
    {
        sum = sum + (1/((2*(float)i)+1));
        i++;
    }
    printf("Total sum is %f\n",sum);
}