#include<stdio.h>
#include<ctype.h>

int main()
{
    int a,b;
    printf("Enter two binary value\n");
    scanf("%d %d",&a,&b);
    switch(a)
    {
        case 0:
            switch(b)
            {
                case 0 :
                    printf("The XOR value for %d and %d is 0",a,b);
                    break;
                case 1 :
                    printf("The XOR value for %d and %d is 1",a,b);
                    break;
                default :
                    printf("The XOR value for %d and %d is not defined",a,b);
                    break;
            }
            break;
        case 1:
            switch(b)
            {
                case 0 :
                    printf("The XOR value for %d and %d is 1",a,b);
                    break;
                case 1 :
                    printf("The XOR value for %d and %d is 0",a,b);
                    break;
                default :
                    printf("The XOR value for %d and %d is not defined",a,b);
                    break;
            }
            break;
         default :
                    printf("The XOR value for %d and %d is not defined",a,b);
                    break;
    }
    return 0;
}