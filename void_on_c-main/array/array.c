#include<stdio.h>

void main()
{
    int ara1[5],ara3[5],i,n;
    printf("Enter the size\t");
    scanf("%d",&n);

    //1.single program input

    ara1[0]=1;
    ara1[1]=5;
    ara1[2]=10;
    ara1[3]=15;
    ara1[4]=20;

    //2.group program input

    int ara2[]={1,2,3,4,5};

    //3.user input

    for (i=0;i<n;i++)
    {
        scanf("%d",&ara3[i]);
    }

    //Output

    for (i=0;i<n;i++)
    {
        printf("\n%d\t",ara1[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",ara2[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",ara3[i]);
    }
    printf("\n");
}