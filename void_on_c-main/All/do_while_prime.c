#include<stdio.h>

int main()
{
    int i,j=0,n;
    printf("Please Enter a Number\n");
    scanf("%d",&n);
    i=2;
    do
    {
        if (n%i==0)
        {
            j=1;
        }
        i++;
    }while(i<n);
    if(j==0)
    {
        printf("%d is a Prime Number\n",n);
    }
    else
    {
        printf("%d is not a Prime Number\n",n);
    }
    return 0;
}