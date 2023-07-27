#include<stdio.h>

void main()
{
    int ara[10],i,n,j,k=0;
    printf("Enter the size\t\t");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {   
        printf("\nEnter %d number value\t:",i+1);
        scanf("%d",&ara[i]);
    }
    printf("\n\nSearching What?\t");
    scanf("%d",&j);
    //Output

    for(i=0;i<n;i++)
    {
        if(ara[i]==j)
        {
            k++;
            break;
        }
    }
    if(k!=0)
    {
        printf("\nVariable found\n");
    }
    else
    {
        printf("\nVariable Not found\n");
    }
}