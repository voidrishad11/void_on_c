#include<stdio.h>

void main()
{
    int a[100],i,j,n,temp;
    printf("Please enter the size : ");
    scanf("%d",&n);
    printf("\n\nPlease enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("\n");
    for (i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}