#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two Numbers\n");
    scanf("%d %d",&x,&y);
    if (x!=y)
    {
        if (x>y)
        {
            printf("\n%d is greater",x);
        }
        else
        {
            printf("\n%d is greater",y);
        }
    }
    else
    {
        printf("%d and %d are equal",x,y);
    }
    return 0;
}