#include<stdio.h>

int main()
{

    int l,u,j=0,i;
    printf("Please Enter lower limit\n");
    scanf("%d",&l);
    printf("Please Enter upper limit\n");
    scanf("%d",&u);
    for(;u<=l;u--)
    {
        for(i=u;i>2;i--)
        {
            if(l%i!=0)
            {
                j=1;
                break;
            }
        }
        if (j==0)
        {
            printf("%d ",l);
        }
    } 
    return 0;
}