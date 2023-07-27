#include<stdio.h>

void main()
{
    int ara[10],i,n,j,k=0;
    printf("Enter the size\t\t:");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d number value\t:",i+1);
        scanf("%d",&ara[i]);
    }
    printf("\n\nSearching What?\t\t:");
    scanf("%d",&j);
    //Output

    for(i=0;i<n;i++)
    {
        if(ara[i]==j)
        {
            k++;
        }
    }
    if(k==0)
    {
        printf("\nVariable Not found\n\n");
    }
    else if(k==1)
    {
        printf("\n%d has been found for 1 time\n\n",j);
    }
    else
    {
        printf("\n%d has been found for %d times\n\n",j,k);
    }
}