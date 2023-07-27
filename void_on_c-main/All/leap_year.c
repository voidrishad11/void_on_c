#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Year\n");
    scanf("%d",&x);
    if (x%4==0 && x%100!=0)
    {
        printf("\n%d is a Leap Year\n",x);
    }
    else
    {
        if(x%400==0)
        {
            printf("\n%d is a Leap Year\n",x);
        }
        else
        {
            printf("\n%d is not a Leap Year\n",x);
        }
    }
    return 0;
}