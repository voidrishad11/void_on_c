#include<stdio.h>

int fact(int x)
{
    int i;
    if (x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
void main()
{
    int m,n;
    printf("Enter an integer: ");
    scanf("%d",&m);
    n=fact(m);
    printf("The factorial value of %d is %d\n",m,n);
}


