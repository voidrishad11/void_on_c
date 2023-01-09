#include<stdio.h>

int main()
{
    int i,j;
    printf("Please Enter two Numbers\n");
    scanf("%d %d",&i,&j);
    do
    {
        if(i%2==0)
        {
            printf("%d is Even\n",i);
        }
        i++;
    }while(i<=j);
    return 0;
}