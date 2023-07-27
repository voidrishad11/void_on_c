#include<stdio.h>

void main()
{
    int a[100],i,j,n,temp;
    printf("Enter the size\t\t:");
    scanf("%d",&n);
    printf("\n");
    printf("Please enter the array elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}