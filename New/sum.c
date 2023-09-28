#include<stdio.h>

int main()
{
    int n,i,sum;
    for (n=1;n<=10;n++)
    {
        for (i=1;i<=10;i++)
        {
            printf("%d X %d = %d\t",n,i,n*i);
            
        }
    }
    return 0;
}