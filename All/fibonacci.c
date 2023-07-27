#include<stdio.h>

void main()
{
    int t3,t1=0,t2=1,i,n;
    printf("The Program will print the fibonacci series till your given position.\nPlease enter the number :");
    scanf("%d",&n);
    for(i=3,t3=0;i<=n;i++)
    {
        printf("%d\n",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    
}