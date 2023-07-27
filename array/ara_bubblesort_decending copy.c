#include<stdio.h>

void main()
{
    int ara[10],i,n,j,x;
    printf("Enter the size\t\t:");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d number value\t:",i+1);
        scanf("%d",&ara[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(ara[i]<ara[j])
            {
                x=ara[i];
                ara[i]=ara[j];
                ara[j]=x;
            }
        }
    }
    printf("\n");
    for (i=n-1;i>=0;i--)
    {
        printf("%d\t",ara[i]);
    }
}