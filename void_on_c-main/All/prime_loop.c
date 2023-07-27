#include<stdio.h>

int main()
{

    int m,n,j,i,k;
    printf("Please Enter Lower limit\n");
    scanf("%d",&m);
    printf("Please Enter Upper limit\n");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        for(j=2,k=0;j<i;j++)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }
        }
        if (k==0)
        {
            printf("%d ",i);
        }
    } 
    return 0;
}