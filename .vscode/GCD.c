#include<stdio.h>

int main()
{
    int a,b,x;
    printf("Please enter your numbers\n");
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
        for (;x>=1;x--)
        {
            if(a%x==0 && b%x==0)
            {
                int GCD = x;
                break;
            }
        }
    printf("Your GCD is %d\n",x);
    return 0;
}