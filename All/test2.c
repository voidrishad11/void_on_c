#include<stdio.h>

int main()
{
    int a[20],i;
    a[0]=1;
    a[1]=2;
    a[2]=3;
    i=3;
    while(i<20)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
        i++;
    }
    for(i=0;i<20;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}