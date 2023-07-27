#include<stdio.h>

int recursivefibonacci(int x);
void main()
{
    int m,n;
    printf("Please enter the total number of values you want in the fibonacci series:\n");
    scanf("%d",&n);
    for(i=3,t3=0;i<=n;i++)
    {
        printf("%d\n",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    
}
int recursivefibonacci(int x)
{
    if (x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}