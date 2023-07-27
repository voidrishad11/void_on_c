#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two Numbers\n");
    scanf("%d %d",&x,&y);
    if (x>y)
    {
        printf("\n%d is greater\n",x);
    }
    else if (x==y)
    {
        printf("\n%d and %d are equal\n",x,y);
    }
    else
    {
        printf("\n%d is greater\n",y);
    }
    return 0;
}