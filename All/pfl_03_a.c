#include<stdio.h>
int main ()
{
    int n,r,temp,i=0,a[20],j;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        r=temp%2;
        temp=temp/2;
        a[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
         printf("%d",a[j]);  
    }
    printf("\n");
    return 0;
}
