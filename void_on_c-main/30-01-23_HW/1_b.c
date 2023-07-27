#include<stdio.h>

void main ()
{
    int num,x;
    printf("Enter your mark\t:");
    scanf("%d",&num);
    x=num/10;
    switch(x)
    {
        case 10 :
            printf("\nYou got A+ grade\n");
            break;
        case 9 :
            printf("\nYou got A+ grade\n");
            break;
        case 8:
            printf("\nYou got A+ grade\n");
            break;
        case 7 :
            printf("\nYou got A grade\n");
            break;
        case 6 :
            printf("\nYou got B grade\n");
            break;
        case 5 :
            printf("\nYou got C grade\n");
            break;
        default :
            printf("\nYou got F grade\n");
            break;
    }
}