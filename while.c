#include<stdio.h>

int main()
{
    int i,j;
    scnaf("%d %d",&i,&j);
    while(i<=j)
    {
        if(i%2==0)
        {
            printf("%d is Even",i);
        }
        i++;
    }
    return 0;
}