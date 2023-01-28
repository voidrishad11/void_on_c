#include<stdio.h>

void main()
{
    long i,x;
    int c=0;
    printf("Please Enter a Number\n");
    scanf("%ld",&i);
    while(i!=0)
    {
        c++;
        int x = i%10;
        printf("%d",x);
        i=i/10;
    }
    printf("\n\nTotal Digits are %d\n",c);
}
